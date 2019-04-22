#include "rectangle.h"


rectangle::rectangle(void)
{
	height = 0.0;
	width = 0.0;
	colour = "NULL";
}

rectangle::rectangle(float h, float w, string c)
{
	height = h;
	width = w;
	colour = c;
}

rectangle::~rectangle(void)
{
	cout << "~ rectangle () called."<<endl; 
}
