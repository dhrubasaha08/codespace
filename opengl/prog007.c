/*************************************
Name: Dhruba Saha
Program: Implement concentric ellipse
Program No. 007
Date: 2023-03-29
*************************************/

#include <GL/glut.h>
#include <math.h>

#define PI 3.14159265

void drawEllipse(float xRadius, float yRadius, float x, float y) {
    float theta;

    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 360; i++) {
        theta = i * PI / 180;
        glVertex2f(x + xRadius * cos(theta), y + yRadius * sin(theta));
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Draw outer ellipse
    glColor3f(1.0, 0.0, 0.0);
    drawEllipse(100.0, 200.0, 0.0, 0.0);
    
    // Draw inner ellipse
    glColor3f(0.0, 0.0, 1.0);
    drawEllipse(50.0, 100.0, 0.0, 0.0);

    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-250.0, 250.0, -250.0, 250.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Concentric Ellipse");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}