/********************************
Name: Dhruba Saha
Program: Implement parallel line
Program No. 001
Date: 2023-03-14
********************************/


#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(-0.5f, 0.0f, 0.0f);
        glVertex3f(0.5f, 0.0f, 0.0f);

        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(-0.5f, 0.1f, 0.0f);
        glVertex3f(0.5f, 0.1f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Parallel Lines");
    glutInitWindowSize(800, 600);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
