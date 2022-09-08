#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString test_1;
    MyString test_2("test");

    cout << "Str 1: ";
    test_1.MyStrInit();

    cout << "Str 2: ";
    test_2.MyStrInit();

    cout << endl << endl;

    cout << test_1.MyStrGet();
    cout << test_2.MyStrGet();

    cout << endl << endl;
    test_1.MyStrCpy(test_2);
    cout << test_1.MyStrGet();

    cout << endl << endl;
    test_1.MyStrStr("test");
    cout << test_1.MyStrGet();

    cout << endl << endl;
    test_1.MyChr('t');
    cout << test_1.MyStrGet();

    cout << endl << endl;
    cout << test_1.MyStrLen();

    cout << endl << endl;
    test_1.MyStrCat(test_2);
    cout << test_1.MyStrGet();

    cout << endl << endl;
    test_1.MyDelChr('t');
    cout << test_1.MyStrGet();

    cout << endl << endl;
    test_1.MyStrCmp(test_2);
    cout << test_1.MyStrGet();

    cout << endl;
}