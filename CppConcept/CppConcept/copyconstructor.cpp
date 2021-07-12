#include "Header.h"

Test::Test()
{
	ptr = new int;
}
void Test::display()
{
	cout << "Height :: " << height<<endl;
	cout << "Width :: " << width << endl;
	cout << "Type :: " << *ptr << endl;
}

Test::Test(const Test& cObj)
{
	height = cObj.height;
	width = cObj.width;
	ptr = new int;
	*ptr = *(cObj.ptr);
	cout << "user defined copy constructor" << endl;
}
void Test::setData(int h, int w, int p)
{
	this->height = h;
	this->width = w;
	*ptr = p;
}
Test::~Test()
{
	delete ptr;
}

TestOne::TestOne()
{
	cout << "TestOne Constructor method is callled" << endl;
}