#include "stdafx.h"
#include<stdio.h>
#include<glut.H>
float a=0,b=0,c=5,d=0,e=0,f=0,g=0,h=1,i=0,j=30,l=1,m=12.5,k=1.0;
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT); 
	glColor3f(0.0, 0.8, 0.1); 
		
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(j,k,l,m);
	glMatrixMode(GL_MODELVIEW);
		
	glLoadIdentity(); 
	gluLookAt(a,b,c,d,e,f,g,h,i);
	//glutWireCube (1.0);
	glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
	glBegin(GL_POLYGON);
		glColor3f (1.0, .4, 1.0);
		glVertex3f(.4, .4, .4);
		glVertex3f(.4, -.4, .4);
		glVertex3f(-.4, -.4, .4);
		glVertex3f(-.4, .4, .4);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f (1.0, 1.0, 0.4);
		glVertex3f(.4, .4, .4);
		glVertex3f(.4, -.4, .4);
		glVertex3f(.4, -.4, -.4);
		glVertex3f(.4, .4, -.4);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f (0.4, 1.0, 1.0);
		glVertex3f(.4, .4, .4);
		glVertex3f(.4, .4, -.4);
		glVertex3f(-.4, .4, -.4);
		glVertex3f(-.4, .4, .4);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f (1.0, .4, 0.4);
		glVertex3f(.4, .4, -.4);
		glVertex3f(.4, -.4, -.4);
		glVertex3f(-.4, -.4, -.4);
		glVertex3f(-.4, .4, -.4);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f (0.4, .4, 1.0);
		glVertex3f(-.4, .4, .4);
		glVertex3f(-.4, -.4, .4);
		glVertex3f(-.4, -.4, -.4);
		glVertex3f(-.4, .4, -.4);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f (0.4, 1.0, 0.4);
		glVertex3f(.4, -.4, .4);
		glVertex3f(.4, -.4, -.4);
		glVertex3f(-.4, -.4, -.4);
		glVertex3f(-.4, -.4, .4);
	glEnd();
	glFlush();
}

void keyboard(unsigned char ch, int x, int y)
{
	if(ch=='a') a=a+0.3; 
	if(ch=='A') a=a-0.3; 
	if(ch=='b') b=b+0.3;
	if(ch=='B') b=b-0.3;
	if(ch=='c') c=c+0.3;
	if(ch=='C') c=c-0.3;
	if(ch=='d') d=d+0.3;	
	if(ch=='D') d=d-0.3;	
	if(ch=='e') e=e+0.3;	
	if(ch=='E') e=e-0.3;
	if(ch=='f') f=f+0.3;
	if(ch=='F') f=f-0.3;
	if(ch=='g') g=g+0.3;
	if(ch=='G') g=g-0.3;	
	if(ch=='h') h=h+0.3;
	if(ch=='H') h=h-0.3;	
	if(ch=='i') i=i+0.3;
	if(ch=='I') i=i-0.3;
	if(ch=='j') j=j+1;
	if(ch=='J') j=j-1;
	if(ch=='k') k=k+0.1;
	if(ch=='K') k=k-0.1;
    	if(ch=='l') l=l+0.1;
	if(ch=='L') l=l-0.1;
	if(ch=='m') m=m+0.1;
	if(ch=='M') m=m-0.1;
	if(ch=='r') a=0,b=0,c=5,d=0,e=0,f=0,g=0,h=1,i=0,j=30,l=4,m=10.5,k=1.0; 
	
	glutPostRedisplay(); 
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(700,700);
	glutInitWindowPosition(500,0);
	glutCreateWindow("Lab Final");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}