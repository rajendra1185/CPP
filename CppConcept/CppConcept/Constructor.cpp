#include "Header.h"

ExPlImp::ExPlImp(int data)
{
	this->data = data;
}

void ExPlImp::showData()
{
	cout << "Data :: " << data << endl;
}