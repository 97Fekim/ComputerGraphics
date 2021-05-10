#include <GL/glut.h>

GLfloat x1, y1, x2, y2;

void myMouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		x1 = x;  y1 = 500 - y;
	}
}

void myMotion(int x, int y)
{
	x2 = x;   y2 = 500 - y;
	glutPostRedisplay();
}

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.5, 0.5);
	glRectf(x1, y1, x2, y2);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Mouse Callback");
	glutDisplayFunc(MyDisplay);
	glutMouseFunc(myMouse);
	glutMotionFunc(myMotion);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 1.0);
	glutMainLoop();
	return 0;
}