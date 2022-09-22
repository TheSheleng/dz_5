#include <iostream>
#include "MyString.h"

using namespace std;

int MyString::count = 0;

int main()
{
    MyString test_1 = "test";
    MyString test_2 = move(test_1);

    test_2 = move(test_1);

    MyString test_3{ 'H','e','l','l','o' };
}