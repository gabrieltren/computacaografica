#include <GL/glut.h>

void inicio(void);
void desenha(void);

float positions[] = {
    -0.8,-0.4,
    0.45,-0.6,
    0.45,0.7,
    -0.45,0.5
};

float color[] = {

};

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1280,720);
    glutCreateWindow("Quadrado Louco");
    
    inicio();

    glutDisplayFunc(desenha);

    glutMainLoop();
}

void inicio(){
    glClearColor(0.4,0.24,0.58,0);
}

void desenha(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnableClientState(GL_VERTEX_ARRAY);

    glVertexPointer(2, GL_FLOAT, 2*sizeof(float), positions);

    glDrawArrays(GL_POLYGON, 0, 4);

    glDisableClientState(GL_VERTEX_ARRAY);

    /*
    glBegin(GL_QUADS);

    glVertex2f(-0.5,-0.5);
    glVertex2f(0.5,-0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0-.5,0.5);
    
    glEnd();
    */
    glColor3f(1,1,1);

    glFlush();

}