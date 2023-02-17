#include "Pointers.h"

int Add(int* a, int* b)    //Add two numbers and return the sum
{
	return (*a + *b);
}
void AddVal(int* a, int* b, int* result) //Add two numbers and return the sum through the third pointer argument
{
	*result = *a + *b;
}
void Swap(int* a, int* b)  //Swap the value of two integers
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
void Factorial(int* a, int* result)       //Generate the factorial of a number and return that through the second pointer argument
{
	int i;
	*result = 1;
	for (i = 2; i <= *a; i++)
	{
		(*result) *= i;
	}
}


void AddRef(int a, int b, int& result)    //Add two numbers and return the result through a reference parameter
{
	result = a + b;
}
void FactorialRef(int a, int& result)    //Find factorial of a number and return that through a reference parameter
{
	int i;
	result = 1;
	for (i = 2; i <= a; i++)
	{
		(result) *= i;
	}
}
void SwapRef(int& a, int& b)           //Swap two numbers through reference arguments
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

//int Add(int* a, int* b);    //Add two numbers and return the sum
	//void AddVal(int* a, int* b, int* result); //Add two numbers and return the sum through the third pointer argument
	//void Swap(int* a, int* b);  //Swap the value of two integers
	/*int a = 5, b = 7, result;
	cout << Add(&a, &b) << endl;
	AddVal(&a, &b, &result);
	cout << result << endl;

	Swap(&a, &b);
	cout << "a:: " << a << " b:: " << b << endl;

	Factorial(&a, &result);
	cout << result << endl;*/

	//int a = 5, b = 7, result;
	//AddRef(a, b, result);
	//cout << result << endl;
	//FactorialRef(a, result);
	//cout << result << endl;
	//SwapRef(a, b);            //Swap two numbers through reference arguments
	//cout << "a:: " << a << " b:: " << b << endl;

//2-D pointer mem allocation
#define R	4
#define C	5
void pointerMemAloc()
{
	int* ptr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		ptr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
		cout << ptr[i] << endl;

	delete[]ptr;

	int** dPtr = new int* [R];
	int i = 0;
	for (i = 0; i < R; i++)
	{
		dPtr[i] = new int[5];
	}
	for (i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			dPtr[i][j] = rand() % 100;
		}
	}

	for (i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << dPtr[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < R; i++)
	{
		delete[]dPtr[i];
	}
	delete[]dPtr;
}