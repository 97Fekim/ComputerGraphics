#include <gl/glut.h>
#include <stdio.h>
GLfloat Delta = 0.0;

void MyDisplay() 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.5, 0.8);
	glRectf(-1.0 + Delta, -0.5,
		0.0 + Delta, 0.5);
	glutSwapBuffers();
}

void MyTimer(int Value) 
{
	Delta = Delta + 0.005;
	glutPostRedisplay();
	glutTimerFunc(40, MyTimer, 0);
}

void MyInit() 
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.0, -1.0);
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(
		GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Timer Callback");
	MyInit();
	glutDisplayFunc(MyDisplay);
	glutTimerFunc(40, MyTimer, 0);
	glutMainLoop();
	return 0;
}
