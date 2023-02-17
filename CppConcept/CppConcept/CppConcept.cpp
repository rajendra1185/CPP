// CppConcept.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "Header.h"
#include <string>
#include <typeinfo>
#include "Pointers.h"
using namespace std;




class A {
public:
    virtual void display() = 0;
};
class B : public A
{
public:
    void display()
    {
        cout << "In B" << endl;
    }
};

class C :public A
{
    void display()
    {
        cout << "In C" << endl;
    }
};

void fun(A* aptr)
{
    if(typeid(*aptr) == typeid(B))
    {
        cout << "called B object" << endl;
    }
    else
        cout << "called C object" << endl;
        
}

//int main()
//{
//    
//    auto fn = [](int a, int b) {
//        return a + b;
//    };
//
//    cout << "called function with " << fn(1,2) << endl;
//
//
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class HotelRoom {
//public:
//    HotelRoom(int bedrooms, int bathrooms)
//        : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
//
//    virtual int get_price() {
//        return 50 * bedrooms_ + 100 * bathrooms_;
//    }
//private:
//    int bedrooms_;
//    int bathrooms_;
//};
//
//class HotelApartment : public HotelRoom {
//public:
//    HotelApartment(int bedrooms, int bathrooms)
//        : HotelRoom(bedrooms, bathrooms) {}
//
//    int get_price() {
//        return HotelRoom::get_price() + 100;
//    }
//};
//
//int main() {
//    int n;
//    cin >> n;
//    vector<HotelRoom*> rooms;
//    for (int i = 0; i < n; ++i) {
//        string room_type;
//        int bedrooms;
//        int bathrooms;
//        cin >> room_type >> bedrooms >> bathrooms;
//        if (room_type == "standard") {
//            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
//        }
//        else {
//            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
//        }
//    }
//
//    int total_profit = 0;
//    for (auto room : rooms) {
//        total_profit += room->get_price();
//    }
//    cout << total_profit << endl;
//
//    for (auto room : rooms) {
//        delete room;
//    }
//    rooms.clear();
//
//    return 0;
//}
// 

//class Person
//{
//private:
//    string f_name, s_name;
//public:
//    Person(const string& f, const string& s):f_name(f),s_name(s)
//    {}
//    const string& getFirstname () const
//    {
//        return f_name;
//    }
//    const string& getLastName() const
//    {
//        return s_name;
//    }
//};
//
//ostream& operator << (ostream& out, const Person& p)
//{
//    out << "first_name=" << p.getFirstname() << ",last_name=" << p.getLastName();
//    return out;
//}
//
//
//int main()
//{
//    string first_name, last_name, event;
//    cin >> first_name >> last_name >> event;
//    auto p = Person(first_name, last_name);
//    cout << p << " " << event << endl;
//    return 0;
//}
// 
// 
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        vector<int> retInd;
        while (start < end)
        {
            if (nums[start] + nums[end] == target)
            {
                retInd.push_back(start);
                retInd.push_back(end);
                return retInd;
            }
            else if (nums[start] + nums[end] > target)
                end--;
            else
                start++;
        }
        return retInd;
    }
};

int main()
{
    Solution S;
    vector<int> v1 = { 3,3,6 };
    vector<int> v2;
    v2 = S.twoSum(v1, 6);
    return 0;

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

/*

using namespace std;
#include <iostream>
#include <string>
#include <thread>
#include <mutex>

std::mutex mtx;

void oddAndEven(int n, int end);

int main()
{
    std::thread odd(oddAndEven, 1, 10);
    std::thread Even(oddAndEven, 2, 10);
    std::thread Even1(oddAndEven, 3, 10);
    odd.join();
    Even.join();
    Even1.join();

    return 0;
}



void oddAndEven(int n, int end) {
    int x = n;
    for (; x < end;) {
        mtx.lock();
        std::cout << n << " - " << x << endl;
        x += 2;
        mtx.unlock();
        std::this_thread::yield();
        continue;
    }
}
*/