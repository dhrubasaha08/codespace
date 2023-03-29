/**************************
Name: Dhruba Saha
Program: Implement circle
Program No. 004
Date: 2023-03-29
**************************/

#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(2.0);
    glBegin(GL_POINTS);

    float radius = 100.0;
    float x = 0.0, y = radius;
    float p = 5.0/4.0 - radius;

    while (x <= y) {
        glVertex2f(x + 250, y + 250);
        glVertex2f(-x + 250, y + 250);
        glVertex2f(x + 250, -y + 250);
        glVertex2f(-x + 250, -y + 250);
        glVertex2f(y + 250, x + 250);
        glVertex2f(-y + 250, x + 250);
        glVertex2f(y + 250, -x + 250);
        glVertex2f(-y + 250, -x + 250);

        if (p < 0) {
            p += 2.0 * x + 3.0;
        }
        else {
            p += 2.0 * (x - y) + 5.0;
            y--;
        }
        x++;
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1440, 1440);
    glutCreateWindow("Circle");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
