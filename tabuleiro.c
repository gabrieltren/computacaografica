#include <GL/glut.h>

void inicio(void);
void desenha(void);

GLfloat base[] = {
    -0.83,-0.83,
    0.83,-0.83,
    0.83,0.83,
    -0.83,0.83
};

GLfloat quadrante[] ={
    // 1 linha do tabuleiro (8)
    -0.8,0.8,-0.6,0.8,-0.6,0.6,-0.8,0.6,
    -0.4,0.8,-0.2,0.8,-0.2,0.6,-0.4,0.6,
    0.0,0.8,0.2,0.8,0.2,0.6,0.0,0.6,
    0.4,0.8,0.6,0.8,0.6,0.6,0.4,0.6,

    // 2 linha do tabuleiro  (7)
    -0.6,0.6,-0.4,0.6,-0.4,0.4,-0.6,0.4,
    -0.2,0.6,0.0,0.6,0.0,0.4,-0.2,0.4,
    0.2,0.6,0.4,0.6,0.4,0.4,0.2,0.4,
    0.6,0.6,0.8,0.6,0.8,0.4,0.6,0.4,

    // 3 linha do tabuleiro (6)
    -0.8,0.4,-0.6,0.4,-0.6,0.2,-0.8,0.2,
    -0.4,0.4,-0.2,0.4,-0.2,0.2,-0.4,0.2,
    0.0,0.4,0.2,0.4,0.2,0.2,0.0,0.2,
    0.4,0.4,0.6,0.4,0.6,0.2,0.4,0.2,

    // 4 linha do tabuleiro (5)
    -0.6,0.2,-0.4,0.2,-0.4,0.0,-0.6,0.0,
    -0.2,0.2,0.0,0.2,0.0,0.0,-0.2,0.0,
    0.2,0.2,0.4,0.2,0.4,0.0,0.2,0.0,
    0.6,0.2,0.8,0.2,0.8,0.0,0.6,0.0,

    // 5 linha do tabuleiro (4)
    -0.8,0.0,-0.6,0.0,-0.6,-0.2,-0.8,-0.2,
    -0.4,0.0,-0.2,0.0,-0.2,-0.2,-0.4,-0.2,
    0.0,0.0,0.2,0.0,0.2,-0.2,0.0,-0.2,
    0.4,0.0,0.6,0.0,0.6,-0.2,0.4,-0.2,

    // 6 linha do tabuleiro (3)
    -0.6,-0.2,-0.4,-0.2,-0.4,-0.4,-0.6,-0.4,
    -0.2,-0.2,0.0,-0.2,0.0,-0.4,-0.2,-0.4,
    0.2,-0.2,0.4,-0.2,0.4,-0.4,0.2,-0.4,
    0.6,-0.2,0.8,-0.2,0.8,-0.4,0.6,-0.4,

    // 7 linha do tabuleiro (2)
    -0.8,-0.4,-0.6,-0.4,-0.6,-0.6,-0.8,-0.6,
    -0.4,-0.4,-0.2,-0.4,-0.2,-0.6,-0.4,-0.6,
    0.0,-0.4,0.2,-0.4,0.2,-0.6,0.0,-0.6,
    0.4,-0.4,0.6,-0.4,0.6,-0.6,0.4,-0.6,

    // 8 linha do tabuleiro(1)

    -0.6,-0.6,-0.4,-0.6,-0.4,-0.8,-0.6,-0.8,
    -0.2,-0.6,0.0,-0.6,0.0,-0.8,-0.2,-0.8,
    0.2,-0.6,0.4,-0.6,0.4,-0.8,0.2,-0.8,
    0.6,-0.6,0.8,-0.6,0.8,-0.8,0.6,-0.8,
};

GLfloat trigle [] = {
    
};



float color[] = {

};

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH |GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Tabuleiro Louco");
    
    inicio();

    glutDisplayFunc(desenha);

    glutMainLoop();
}

void inicio(){
    glClearColor(1,1,1,0);
}

void desenha(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnableClientState(GL_VERTEX_ARRAY);

    glVertexPointer(2, GL_FLOAT, 2*sizeof(float), base);

    glDrawArrays(GL_POLYGON, 0, 4);

    glDisableClientState(GL_VERTEX_ARRAY);
    

    glColor3f(1,1,1);

    glEnableClientState(GL_VERTEX_ARRAY);

    glVertexPointer(2, GL_FLOAT, 2*sizeof(float), quadrante);

    glDrawArrays(GL_QUADS, 0, 128);

    glDisableClientState(GL_VERTEX_ARRAY);
    /*
    glBegin(GL_QUADS);

    glVertex2f(-0.4,0.8);
    glVertex2f(-0.2,0.8);
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.4,0.6);
    
    glEnd();
    */
    glColor3f(0,0.65,0);

    glFlush();

}