// CppConcept.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

int main()
{
     
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


/*
Copy constructor

    Test tObj;
    cout << "Before Copy Constructor" << endl;
    tObj.setData(10, 5, 12);
    tObj.display();

    cout << "After Copy Constructor" << endl;
    //string changeType = "Circle";
    Test copyObj = tObj;

    copyObj.display();
    tObj.display();
    cout << "===========================" << endl;

    tObj.setData(12, 11, 13);
    copyObj.display();
    tObj.display();
*/

/*
To block this kind of implicit conversion, we use the keyword explicit:

 ExPlImp exObj(10);
    cout << "before changing the data" << endl;
    exObj.showData();
    cout << "After changing the data" << endl;
    ExPlImp exObj1(20);
    exObj1.showData();
*/