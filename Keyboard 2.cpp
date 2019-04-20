#include "stdafx.h"
#include <stdio.h>
#include<glut.h>
void upperpentagon()
{
	//top rainbow pentagon
	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0);
	glVertex2f(.3125, .4);
	glColor3f(1, 0, 0);
	glVertex2f(.5625, .55);
	glColor3f(0, 0, 1);
	glVertex2f(0,0.95);
	glColor3f(1, 0, 0);
	glVertex2f(-.5625, .55);
	glColor3f(0, 0, 1);
	glVertex2f(-.3125, .4);
	glEnd(); 
	glFlush();
}
void middlepentagon()
{
  glBegin(GL_POLYGON); 
	glColor3f(0, 0, 1);
	glVertex2f(0, 0);
	glColor3f(0, 0, 1);
	glVertex2f(.875, .1875);
	glColor3f(0, 0, 1);
	glVertex2f(.3125, .4);
	glColor3f(0, 0, 1);
	glVertex2f(-.3125, .4);
	glColor3f(0, 0, 1);
	glVertex2f(-.875, .1875);
	
	glEnd(); 
	glFlush();
}
void quad()
{
	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0);
	glVertex2f(0,-.5);
	glColor3f(0, 1, 0);
	glVertex2f(0.5625,-.25);
	glColor3f(0, 1, 0);
	glVertex2f(0,0);
	glColor3f(0, 1, 0);
	glVertex2f(-.5625,-.25);

	glEnd(); 	 
	glFlush(); 
}
void  lowertriangle()
{
	glBegin(GL_TRIANGLES); 

	glColor3f(1, 0, 0);
	glVertex2f(0,-0.85);
	glColor3f(1, 0, 0);
	glVertex2f(.25,-.5);
	glColor3f(1, 0, 0);
	glVertex2f(-.25,-.5); 

	glEnd(); 
	glFlush();
}


void leaf()
{
   
   glPushMatrix();
   glScalef(0.2,0.6,0);
   glTranslatef(0,0.62,0);
   upperpentagon();
   middlepentagon();
   quad();
   lowertriangle();
   glPopMatrix();
}

void display(void )
{
	
	leaf();

}

void display2(void )
{
	quad();
}
void display3(void)
{
	upperpentagon();
}
void display4(void )
{
	middlepentagon();
}
void display5(void )
{
	lowertriangle();
}


void keyboard(unsigned char c,int x,int y)
{
	if(c=='R')
		glRotatef(5,0,0,1);
	    glClear(GL_COLOR_BUFFER_BIT);
	if(c=='r'){
		glRotatef(-5,0,0,1);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='p'){
		glTranslatef(0,.2,0);
		glRotatef(60,0,0,1);
		glScalef(1,-1,1);
		glRotatef(-60,0,0,1);
		glTranslatef(0,-.2,0);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='s'){
		glScalef(0.9,0.9,0);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
    if (c=='S'){
		glScalef(1/.9,1/.9,0);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='t'){
		glTranslatef(0,-0.1,0);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='T'){
		glTranslatef(0,0.1,0);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='0'){
		glutDisplayFunc(display);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='1'){
		glutDisplayFunc(display3);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='2'){
		glutDisplayFunc(display4);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='3'){
		glutDisplayFunc(display5);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
	if(c=='4'){
		glutDisplayFunc(display2);
	    glClear(GL_COLOR_BUFFER_BIT);
	}
    glutPostRedisplay();

}


int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(700,700);
	glutInitWindowPosition(500,0);
	glutCreateWindow("Lab-2");
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	
	
	glutMainLoop();
	return 0;
}