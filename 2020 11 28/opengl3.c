#define  _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include<stdio.h>

float xmin, xmax, ymin, ymax;


void myinit(void)
{
	glShadeModel(GL_FLAT);
	glClearColor(1.0, 1.0, 1.0, 0.0);
}


void myReshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		gluOrtho2D(0.0, 1.0, 0.0, 1.0 * (GLfloat)h / (GLfloat)w);
	else
		gluOrtho2D(0.0, 1.0 * (GLfloat)w / (GLfloat)h, 0.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}

int Clip(float p, float q, float* tL, float* tU)
{
	int flag = 1;/*flagΪ��־������0��ʾ������1��ʾ�ɼ�*/
	float r;

	if (p < 0.0)
	{
		r = q / p;
		if (r > *tU)
			flag = 0;
		else if (r > *tL) {
			*tL = r;/*mȡ�����������ֵ*/
		}
	}
	else if (p > 0.0) {
		r = q / p;
		if (r < *tL)
			flag = 0;
		else if (r < *tU) {
			*tU = r;/*nȡ�뿪�����Сֵ*/
		}
	}

	else if (q < 0 && p == 0) //ƽ���ڱ߽窡�����ڽ������ 
		flag = 0;
	return flag;
}
void myclip()
// line clipping algorithm 
{
	float dx, dy, x1, tL, tU, x2, y1, y2;
	tL = 0, tU = 1.0;
	printf("�������߶ε�������������x1,y1,x2,y2:\n");
	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

	glBegin(GL_LINES);
	glColor4f(0.0, 0.0, 0.0, 0.0);
	glVertex2f(x1, y1); // line startpoint 
	glVertex2f(x2, y2); // line endpoint 
	glEnd();

	dx = x2 - x1;

	if (Clip(-dx, x1 - xmin, &tL, &tU))
		if (Clip(dx, xmax - x1, &tL, &tU)) {
			dy = y2 - y1;
			if (Clip(-dy, y1 - ymin, &tL, &tU))
				if (Clip(dy, ymax - y1, &tL, &tU))
				{
					if (tU < 1.0)
					{
						x2 = x1 + tU * dx;//ͨ��n��òü����p2�˵� 
						y2 = y1 + tU * dy;
					}
					if (tL > 0.0)
					{
						x1 = x1 + tL * dx;//ͨ��m��òü����p1�˵� 
						y1 = y1 + tL * dy;
					}
					glBegin(GL_LINES);
					glColor4f(1.0, 0.0, 0.0, 1.0);
					glVertex2f(x1, y1); // clipped line startpoint 
					glVertex2f(x2, y2); // clipped line endpoint 
					glEnd();
				}
		}

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	printf("��ֱ�������ε��������ϱ߽磺\n");
	scanf("%f%f%f%f", &xmin, &xmax, &ymin, &ymax);
	glColor4f(1.0, 1.0, 0.0, 0.75);
	glBegin(GL_POLYGON);
	glVertex2f(xmin, ymin); // Bottom Left
	glVertex2f(xmax, ymin); // Bottom Left
	glVertex2f(xmax, ymax); // Bottom Right
	glVertex2f(xmin, ymax); // Bottom Right
	glEnd();

	myclip();
	glFlush();
}


/*  Main Loop
 *  Open window with initial window size, title bar,
 *  RGBA display mode, and handle input events.
 */
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	//define size and the relative positon of the applicaiton window on the display
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	//init the defined window with "argv[1]" as topic showed on the top the window
	glutCreateWindow(argv[0]);
	// opengl setup
	myinit();

	//define callbacks
	glutDisplayFunc(display);
	glutReshapeFunc(myReshape);
	//enter the loop for display
	glutMainLoop();

	return 1;
}
