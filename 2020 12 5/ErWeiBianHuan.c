/*#include <GL/glut.h>
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5.0, 5.0, -5.0, 5.0); //设置显示的范围是X:-5.0~5.0, Y:-5.0~5.0
	glMatrixMode(GL_MODELVIEW);
}
void drawSquare(void) //绘制中心在原点，边长为2的正方形
{
	glBegin(GL_POLYGON); //顶点指定需要按逆时针方向
	glVertex2f(-1.0f, -1.0f);//左下点
	glVertex2f(1.0f, -1.0f);//右下点
	glVertex2f(1.0f, 1.0f);//右上点
	glVertex2f(-1.0f, 1.0f);//左上点
	glEnd();
}
void myDraw(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //清空
	glLoadIdentity(); //将当前矩阵设为单位矩阵
	glPushMatrix();
	glTranslatef(0.0f, 2.0f, 0.0f);
	glScalef(3.0, 0.5, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	drawSquare(); //上面红色矩形
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-3.0, 0.0, 0.0);
	glPushMatrix();
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	drawSquare(); //中间左菱形
	glPopMatrix();
	glTranslatef(3.0, 0.0, 0.0);
	glPushMatrix();
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.7, 0.0);
	drawSquare(); //中间中菱形
	glPopMatrix();
	glTranslatef(3.0, 0.0, 0.0);
	glPushMatrix();
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.4, 0.0);
	drawSquare(); //中间右菱形
	glPopMatrix();
	glPopMatrix();
	glTranslatef(0.0, -3.0, 0.0);
	glScalef(4.0, 1.5, 1.0);
	glColor3f(0.0, 0.0, 1.0);
	drawSquare(); //下面蓝色矩形
	glFlush();
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(600, 600);
	glutCreateWindow("几何变换函数综合示例");
	init();
	glutDisplayFunc(myDraw);
	glutMainLoop();
}
*/