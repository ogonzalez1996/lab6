#include <GL/glx.h>
#include "fonts.h"

void showName (const char* name, int x, int y) 
{
    Rect r;
    //Position of text as x and y
    r.bot = x;
    r.left = y;
    //render the text to screen
    ggprint16(&r, 16, 0x00ffff00, name);

}

void drawBox (int x, int y) 
{
    //Draw the box
    static float angle = 0.0;
    glColor3ub(255,0,0);
    glPushMatrix();
    glTranslatef(x, y, 0.0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-50.0, -50.0, 0.0);
    angle = angle + 2.5;
    glBegin(GL_QUADS);
        glVertex2i(0, 0);
     	glVertex2i(0, 100);
     	glVertex2i(100, 100); 
	glVertex2i(100, 0); 
     glEnd();
    //glPopMatrix();

    Rect r;
    //Position of text as x and y
    r.bot = 50;
    r.left = 50;
    r.center = 1;
    //render the text to screen
    ggprint8b(&r, 16, 0x00ffff00, "omar gonzalez");
glPopMatrix();

}
