#include <iostream>
#include "MyString.h"

using namespace std;

int MyString::count = 0;

int main()
{
    MyString test_1("test");
    MyString test_2(test_1);
    
    cout << test_2.MyStrGet() << endl;
}