#include "stdafx.h"
#include <stdio.h>
#include<glut.h>

void leaf(void)
{
	glBegin(GL_POLYGON);
		glColor3f(0,0,1);
		glVertex2f(-.5,.55);
		glColor3f(1,0,0);
		glVertex2f(-.3,.35);
		glColor3f(0,0,1);
		glVertex2f(.3,.35);
		glColor3f(1,0,0);
		glVertex2f(.5,.55);
		glColor3f(0,1,0);
		glVertex2f(0,.9);

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
void Rotate()
{
	for(double i=0; ;i=i+0.1)
	{   glClear(GL_COLOR_BUFFER_BIT);
		glPushMatrix();
		glRotated(i,0,0,1);
		display();
		glPopMatrix();
		glutSwapBuffers();
		glFlush();
	}

}
int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(700,700);
	glutInitWindowPosition(200,0);
	glutCreateWindow("GABA");
	glutDisplayFunc(Rotate);
	glutMainLoop();
	return 0;
}

