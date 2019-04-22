#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "shape.h"


class triangle:public shape
{
private:
	float base;
	float height;

public:
	triangle();
	~triangle();
	triangle (float, float, string);
	float area()
	{
		float area = 0.5*base*height;
		return area;
	}
};

