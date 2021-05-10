#include <stdlib.h>
#include <gl/glut.h>
static int shoulder = 0, elbow = 0;

void display(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	// Pivot ���� �� ��ü �̵�
	glTranslatef(-1.0, 0.0, 0.0);
	// ������ �������� ȸ��
	glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
	// Pivot���� ������ ��ġ�� �������� �̵�
	glTranslatef(1.0, 0.0, 0.0);
	// ������ �������� ��ü ���� �� ���/Ȯ��
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glScalef(2.0, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	// Pivot ���� �� ��ü �̵�
	glTranslatef(1.0, 0.0, 0.0);
	// ������ �������� ȸ��
	glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
	// Pivot���� ������ ��ġ�� �������� �̵�
	glTranslatef(1.0, 0.0, 0.0);
	// ������ �������� ��ü ���� �� ���/Ȯ��
	glPushMatrix();
	glColor3f(0.0, 0.0, 1.0);
	glScalef(2.0, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 's':
		shoulder = (shoulder + 5) % 360;
		break;
	case 'S':
		shoulder = (shoulder - 5) % 360;
		break;
	case 'e':
		elbow = (elbow + 5) % 360;
		break;
	case 'E':
		elbow = (elbow - 5) % 360;
		break;
	case 27:
		exit(0);
		break;
	}
	glutPostRedisplay();
}

void reshape(int w, int h) 
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -5.0);
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Robot Arm");
	glClearColor(0.7, 0.7, 0.7, 1.0);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

