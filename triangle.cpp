#include "triangle.h"

triangle::triangle()
{
	base = 0.0;
	height = 0.0;
	colour = "NULL";
}
triangle::triangle(float b, float h, string c)
{
	base = b;
	height = h;
	colour = c;
}


triangle::~triangle(void)
{
	cout <<"~ triangle () called."<<endl;
}
