#include <iostream>
#include "MyString.h"

using namespace std;

int MyString::count = 0;

int main()
{
    MyString test("test");
    MyString test_2;

    test_2 = test_2 = test; 
    cout << test_2.MyStrGet() << endl;

    cout << "Operator(): ";
    test();
    cout << "Operator[]: " << test[0] << test[1] << test[2] << test[3] << endl;

    cout << "Str: " << (char*)test << endl;
    cout << "Len: " << (int)test << endl;
}