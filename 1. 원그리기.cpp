#include <GL/glut.h>
#include <math.h>

#define Pi 3.1415

void display() {
    GLfloat Angle;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(3);
    glBegin(GL_POINTS);
    for (Angle = 0.0; Angle <= 2.0 * Pi; Angle += Pi / 20.0)
        glVertex3f(0.5 * cos(Angle), 0.5 * sin(Angle), 0.0);
    glEnd();
    glFlush();

}

int main(int argc, char** argv) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Callback Functions");

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

