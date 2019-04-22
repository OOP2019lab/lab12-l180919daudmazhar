#include "shape.h"


shape::shape()
{
	type = "NULL";
	colour = "NULL"; 
}

shape::shape(string c)
{
	colour = c;
}
shape::~shape(void)
{
	cout << "~shape() called."<<endl; 
}
