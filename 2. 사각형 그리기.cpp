#include <GL/glut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// ���� �߿� x
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.25, 0.25, 0.0);
	glVertex3f(0.5, 0.125, 0.0);
	glVertex3f(0.75, 0.25, 0.0);
	glVertex3f(0.875, 0.5, 0.0);
	glVertex3f(0.75, 0.75, 0.0);
	glVertex3f(0.5, 0.875, 0.0);
	glVertex3f(0.25, 0.75, 0.0);
	glVertex3f(0.125, 0.5, 0.0);
	glEnd();
	glFlush();
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
	/* -------�Ű� �Ƚᵵ ��--------*/
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("hello");
	/* -------�Ű� �Ƚᵵ ��--------*/

	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
