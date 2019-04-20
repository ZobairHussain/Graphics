// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <stdio.h>
#include<glut.h>

void display(void)
{
	glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(.3,.35);
		glColor3f(1,0,0);
		glVertex2f(.5,.55);
		glColor3f(0,0,1);
		glVertex2f(0,.9);
		glColor3f(1,0,0);
		glVertex2f(-.5,.55);
		glColor3f(0,0,1);
		glVertex2f(-.3,.35);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0,0,1);
		glVertex2f(0,0);
		glVertex2f(.85,.18);
		glVertex2f(.3,.35);
		glVertex2f(-.3,.35);
		glVertex2f(-.85,.18);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(.6,-.25);
		glVertex2f(0,0);
		glVertex2f(-.6,-.25);
		glVertex2f(0,-.5);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(1,0,0);
		glVertex2f(.3,-.5);
		glVertex2f(-.3,-.5);
		glVertex2f(0,-.8);
	glEnd();
	glFlush();
}
void keyboard(unsigned char ch,int x,int y)
{
	switch (ch)
	{
	case 114:		//114 for R
		glRotated(45,0,0,1);
		glClear(GL_COLOR_BUFFER_BIT);
		glutPostRedisplay();
		break;
	case 101:	//101 for E
		glRotated(-45,0,0,1);
		glClear(GL_COLOR_BUFFER_BIT);
		glutPostRedisplay();
		break;
	case 115:
		glScaled(.8,.8,0);
		glClear(GL_COLOR_BUFFER_BIT);
		glutPostRedisplay();
		break;
	case 100:
		glScaled(1/.8,1/.8,0);
		glClear(GL_COLOR_BUFFER_BIT);
		glutPostRedisplay();
		break;
	case 116:
		glTranslated(.5,.5,0);
		glClear(GL_COLOR_BUFFER_BIT);
		glutPostRedisplay();
		break;
	case 117:
		glTranslated(-.5,-.5,0);
		glClear(GL_COLOR_BUFFER_BIT);
		glutPostRedisplay();
		break;
	default:
		break;
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(500,50);
	glutCreateWindow("GABA");
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

