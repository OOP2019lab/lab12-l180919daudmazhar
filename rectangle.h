#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "shape.h"



class rectangle:public shape
{
private:
	float height;
	float width;
public:
	rectangle(void);
	~rectangle(void);
	rectangle(float, float, string);
	float area()
	{
		float area = height*width; 
		return area;

	}
};

