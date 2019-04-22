#include "circle.h"


circle::circle()
{
	radius = 0.0;
	colour = "NULL";
}

circle::circle(float r, string c)
{
	radius = r;
	colour = c;
}
circle::~circle(void)
{
	cout << "~ circle () called."<<endl; 
}
