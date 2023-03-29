/************************************
Name: Dhruba Saha
Program: Implement concentric circle
Program No. 005
Date: 2023-03-29
************************************/

#include <GL/glut.h>
#include <math.h>

#define PI 3.14159265

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 360; i++) {
        float x = cos(i*PI/180);
        float y = sin(i*PI/180);
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 360; i++) {
        float x = cos(i*PI/180)*0.75;
        float y = sin(i*PI/180)*0.75;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 360; i++) {
        float x = cos(i*PI/180)*0.5;
        float y = sin(i*PI/180)*0.5;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 360; i++) {
        float x = cos(i*PI/180)*0.25;
        float y = sin(i*PI/180)*0.25;
        glVertex2f(x, y);
    }
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Concentric Circles");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
