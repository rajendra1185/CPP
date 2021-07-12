#pragma once
#include <iostream>
#include <string>
using namespace std;

class TestOne
{
public:
	TestOne();
};
class Test
{
	int height, width;
	int *ptr;
public:
	Test();
	void display();
	Test(const Test&);
	void setData(int h, int w, int p);
	~Test();
	TestOne tOne;
};

class ExPlImp {
private:
	int data;
public:
	explicit ExPlImp(int data);
	void showData();
};