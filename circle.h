#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "shape.h"


class circle:public shape
{
private: 
	float radius;
public:
	circle(void);
	~circle(void);
	circle (float, string);
	float area()
	{
	 float area = 3.142*radius*radius;
		return area;
	}
};

