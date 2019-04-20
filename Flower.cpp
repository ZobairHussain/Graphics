// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <stdio.h>
#include<glut.h>

void leaf(void)
{
	glBegin(GL_POLYGON);
		glColor3f(0,0,1);
		glVertex2f(.3,.35);
		glColor3f(1,0,0);
		glVertex2f(.5,.55);
		glColor3f(0,1,0);
		glVertex2f(0,.9);
		glColor3f(0,0,1);
		glVertex2f(-.5,.55);
		glColor3f(1,0,0);
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

void display(void)
{
	for(int i=0;i<5;i++)
	{
		glPushMatrix();
		glRotated(72*i,0,0,1);
		glTranslated(0,.45,0);
		glScaled(.18,.56,0);
		leaf();
		glPopMatrix();
	}
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

