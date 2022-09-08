#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString test_1("testtest");
    MyString test_2("test");

    //test_2.MyStrInit();

    test_1.MyDelChr('e');

    cout << test_1.MyStrGet();
}