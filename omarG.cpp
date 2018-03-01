#include "fonts.h"

void showName(const char* name, int x, int y){
	Rect r;
	//Position of text as x and y
	r.bot = x;
	r.left = y;
        //render the text to screen
	ggprint16(&r, 16, 0x00ffff00, name);

}
