// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <stdio.h>
#include<glut.h>

void display(void)
{
	glBegin(GL_POLYGON);
		glVertex2f(0,.9);
		glVertex2f(-.5,.55);
		glVertex2f(-.3,.35);
		glVertex2f(.3,.35);
		glVertex2f(.5,.55);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(-.3,.35);
		glVertex2f(-.85,.18);
		glVertex2f(0,0);
		glVertex2f(.85,.18);
		glVertex2f(.3,.35);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(-.6,-.25);
		glVertex2f(0,-.5);
		glVertex2f(.6,-.25);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(.3,-.5);
		glVertex2f(-.3,-.5);
		glVertex2f(0,-.8);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(500,50);
	glutCreateWindow("GABA");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

