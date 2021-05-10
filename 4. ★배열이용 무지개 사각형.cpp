#include <GL/glut.h>

void display() {
	GLfloat pt[4][3] = { { 0.25, 0.25, 0.0 },{ 0.75, 0.25, 0.0 },
	{ 0.75, 0.75, 0.0 },{ 0.25, 0.75, 0.0 } };
	GLfloat color[4][3] = { { 1.0, 0.0, 0.0 },{ 0.0, 1.0, 0.0 },
	{ 0.0, 0.0, 1.0 },{ 1.0, 1.0, 1.0 } };
	GLubyte index[4] = { 0, 1, 2, 3 };

	glClear(GL_COLOR_BUFFER_BIT);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glVertexPointer(2, GL_FLOAT, sizeof(GLfloat) * 3, pt);
	glColorPointer(3, GL_FLOAT, 0, color);
	glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_BYTE, index);
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
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("hello");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
