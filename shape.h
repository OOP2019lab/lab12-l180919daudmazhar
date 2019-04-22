#pragma once

#include <iostream>
using namespace std;
#include <string>


class shape
{
protected:
	string type;

public:
	shape(void);
	virtual ~shape(void);
	shape (string);
	virtual float area()
	{
		return 0.0;
	}

	string colour;
};

