/*#include <GL/glut.h>
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5.0, 5.0, -5.0, 5.0); //������ʾ�ķ�Χ��X:-5.0~5.0, Y:-5.0~5.0
	glMatrixMode(GL_MODELVIEW);
}
void drawSquare(void) //����������ԭ�㣬�߳�Ϊ2��������
{
	glBegin(GL_POLYGON); //����ָ����Ҫ����ʱ�뷽��
	glVertex2f(-1.0f, -1.0f);//���µ�
	glVertex2f(1.0f, -1.0f);//���µ�
	glVertex2f(1.0f, 1.0f);//���ϵ�
	glVertex2f(-1.0f, 1.0f);//���ϵ�
	glEnd();
}
void myDraw(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //���
	glLoadIdentity(); //����ǰ������Ϊ��λ����
	glPushMatrix();
	glTranslatef(0.0f, 2.0f, 0.0f);
	glScalef(3.0, 0.5, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	drawSquare(); //�����ɫ����
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-3.0, 0.0, 0.0);
	glPushMatrix();
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	drawSquare(); //�м�������
	glPopMatrix();
	glTranslatef(3.0, 0.0, 0.0);
	glPushMatrix();
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.7, 0.0);
	drawSquare(); //�м�������
	glPopMatrix();
	glTranslatef(3.0, 0.0, 0.0);
	glPushMatrix();
	glRotatef(45.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.4, 0.0);
	drawSquare(); //�м�������
	glPopMatrix();
	glPopMatrix();
	glTranslatef(0.0, -3.0, 0.0);
	glScalef(4.0, 1.5, 1.0);
	glColor3f(0.0, 0.0, 1.0);
	drawSquare(); //������ɫ����
	glFlush();
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(600, 600);
	glutCreateWindow("���α任�����ۺ�ʾ��");
	init();
	glutDisplayFunc(myDraw);
	glutMainLoop();
}
*/