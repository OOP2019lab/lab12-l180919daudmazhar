// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include <conio.h>
#include <iostream>
using namespace std;
#include <string>
#include "stdafx.h"
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

float sumArea(shape* Shape1,shape* Shape2)
{
	float sum = Shape1->area() + Shape2->area();
	return sum;
}

int main()
{
	//TASK 1 & 2
triangle t1(1.0,9.0, "Red");
circle c1(2, "Blue");
rectangle r1(6,2, "Orange");
cout<<t1.area()<<endl;
cout<<t1.colour<<endl;
cout<<c1.area()<<endl;
cout<<r1.area()<<endl;
 
shape *sptr= &t1;
shape &sref=r1;
cout<< sptr->area()<<endl;
cout<< sptr->colour<<endl;
cout<< sref.colour<<endl;
cout<< sref.area()<<endl;

	//TASK 3

shape s1("Purple");
 
cout<<sumArea(&t1,&c1) << endl;
cout<<sumArea(sptr,&sref) <<  endl;
cout<<sumArea(&s1,&t1) << endl;

cout << endl << endl << "***********************\n\n";

int count= 2;
shape** shapesArray= new shape*[count];
for(int i = 0; i < count; i++)
{
	shapesArray[i] = nullptr;  //INITIALIZING WITH NULLPTR
}
	string c = "NULL";
	float base = 0, height = 0, width = 0, radius = 0;

for(int i = 0; i < count; )
{
	  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
  	switch (_getch())
  	{
        	case '1':
				cout << "Enter base value: " << endl;
				cin >> base;				//get base from user as input
				cout << "Enter height: " << endl;
				cin >> height;				//get height from user as input
				cout << "Enter colour: " << endl;
				cin >> c;					//get color from user as input
				
				shapesArray[i] = new triangle(base, height, c); 	// create new triangle object and add to shapesArray[i]      
              	i++;
              	break;


        	case '2':
				cout << "Enter length: " << endl;
				cin >> base;
				cout << "Enter width: " << endl;
				cin >> width;
				cout << "Enter colour: " << endl;
				cin >> c;
				shapesArray[i] = new rectangle(base, width, c);
                i++;
              	break;
 
        	case '3':
              	cout << "Enter radius \n";
				cin >> radius;
				cout << "Enter colour \n";
				cin>>c;
				shapesArray[i] = new circle(radius, c);
                i++;
              	break;
 
   	 	default:
              	cout<<"Invalid input. Enter again." <<endl<<endl;
              	break;
	}
}
 
	for(int i = 0; i < count; i++)
	{
		if(shapesArray[i] != nullptr)
			cout << shapesArray[i]->area() << endl;
	}

	for(int i = 0; i < count; i++)
	{
		if(shapesArray[i] != nullptr)
		{
			delete shapesArray[i];
		}
	}
	delete[]shapesArray;
		shapesArray = nullptr;
//print area of all the shapes in shapeArray
//delete all object you have create using new.   
shape *s= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
delete s; //identify which destructor in invoked


	return 0;
}

