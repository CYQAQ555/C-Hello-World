#include <GL/glut.h>

void LineDDA(int x0, int y0, int x1, int y1)
{
	int x, dy, dx, y;
	float m;
	dx = x1 - x0;
	dy = y1 - y0;
	m = dy / dx;
	y = y0;
	glColor3f(1.0f, 1.0f, 0.0f);
	glPointSize(1);
	for (x = x0; x <= x1; x++)
	{
		glBegin(GL_POINTS);
		glVertex2i(x, (int)(y + 0.5));
		glEnd();
		y += m;
	}
}
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(25.0, 25.0, 75.0, 75.0);
	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(0.0f, 0.0f);
	glEnd();
	LineDDA(0, 0, 200, 300);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(100.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(180.0f, 240.0f);
	glEnd();
	glFlush();
}
void Init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}
void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Hello World!");
	Init();
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;
}
