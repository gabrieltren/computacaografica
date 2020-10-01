#include <GL/glut.h>

void inicio(void);
void desenha(void);

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,480);
    glutCreateWindow("Quadrado Louco");

    inicio();

    glutDisplayFunc(desenha);

    glutMainLoop();
}

void inicio(){
    glClearColor(0,0,0,0);
}

void desenha(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    glBegin(GL_TRIANGLES);

    glVertex2f(-0.5,-0.5);
    glVertex2f(0.5,-0.5);
    glVertex2f(0.0,0.5);

    glEnd();

    glColor3f(1.0,0.0,0.0);

    glFlush();

}