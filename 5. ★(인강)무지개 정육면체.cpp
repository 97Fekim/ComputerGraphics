#include <GL/glut.h>

void display() {
	float pos[8][3] = { { -0.5, -0.5, 0.5 },{ -0.5, 0.5, 0.5 },{ 0.5, 0.5, 0.5 },
	{ 0.5, -0.5, 0.5 },{ -0.5, -0.5, -0.5 },{ -0.5, 0.5, -0.5 },
	{ 0.5, 0.5, -0.5 },{ 0.5, -0.5, -0.5 } };
	float color[8][3] = { { 0.0, 0.0, 1.0 },{ 0.0, 1.0, 1.0 },{ 1.0, 1.0, 1.0 },
	{ 1.0, 0.0, 1.0 },{ 0.0, 0.0, 0.0 },{ 0.0, 1.0, 0.0 },
	{ 1.0, 1.0, 0.0 },{ 1.0, 0.0, 0.0 } };
	GLubyte index[6][4] = { { 0, 1, 2, 3 },{ 1, 5, 6, 2 },{ 3, 2, 6, 7 },
	{ 0, 3, 7, 4 },{ 7, 6, 5, 4 },{ 0, 4, 5, 1 } };
	int i;
	glClear(GL_COLOR_BUFFER_BIT);

	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, pos);
	glColorPointer(3, GL_FLOAT, 0, color);
	for (i = 0; i<6; i++)
		glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_BYTE, index[i]);
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
