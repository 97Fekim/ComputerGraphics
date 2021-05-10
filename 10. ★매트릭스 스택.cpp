#include <gl/glut.h>
#include <stdio.h>
GLfloat SunRot = 0.0, EarthRot = 0.0;
int Animation = 0;

void MyDisplay() 
{
	glClear(GL_COLOR_BUFFER_BIT);
	// glLoadIdentity();
	glPushMatrix();
	glRotatef(SunRot, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 0.0); // yellow
	glutWireSphere(40.0, 15, 15); //태양

	glTranslatef(90.0f, 0.0, 0.0);
	glRotatef(EarthRot, 0.0, 0.0, 1.0); // 자전
	glColor3f(0.0, 1.0, 0.0);  // green
	glutWireSphere(20.0, 15, 15); // 지구

	glTranslatef(35.0f, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0); // red
	glutWireSphere(5.0, 15, 15); // 달
	glPopMatrix();
	glutSwapBuffers();
}

void MyTimer(int Value) 
{
	if (Value == 1) 
	{
		SunRot += 1.0 / 8.0;
		EarthRot += 45.0;

		if (SunRot >= 360.0) 
			SunRot = 0.0;

		if (EarthRot >= 360.0) 
			EarthRot = 0.0;

		glutPostRedisplay();
		glutTimerFunc(40, MyTimer, Animation);
	}
}

void MyMouse(int Btn, int Sta, int x, int y)
{
	if (Btn == GLUT_LEFT_BUTTON && Sta == GLUT_DOWN) 
	{
		if (Animation == 0) 
		{
			Animation = 1;
			glutTimerFunc(40, MyTimer, 1);
		}
		else 
		{
			Animation = 0;
		}
	}
}

void MyInit() 
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-150.0, 150.0, -150.0, 150.0, 150.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sun-Earth-Moon");
	MyInit();
	glutDisplayFunc(MyDisplay);
	glutMouseFunc(MyMouse);
	glutMainLoop();
	return 0;
}

