#include <iostream>
#include "MyString.h"

void MyString::TakeMemor(int lenght)
{
	str = new char[lenght + 1];
	this->lenght = lenght;
}

int MyString::LenDefine(const char* str) const
{
	int len = 0;
	while (str[len] != '\0') len += 1;
	return len;
}

MyString::MyString() : MyString(STR_LENGHT_DEFAULT) {};

MyString::MyString(int len)
{
	TakeMemor(len);
	str[NULL] = '\0';

	count += 1;
}

MyString::MyString(const char* str)
{
	MyStrSet(str);

	count += 1;
}

MyString::~MyString()
{
	MyStrClear();

	count -= 1;
}

MyString::MyString(MyString&& other) noexcept
{
	str = other.str;
	lenght = other.lenght;

	other.str = nullptr;
	other.lenght = 0;
}

MyString& MyString::operator=(MyString&& other) noexcept
{
	str = other.str;
	lenght = other.lenght;

	other.str = nullptr;
	other.lenght = 0;

	return *this;
}

MyString::MyString(MyString& str)
{
	MyStrSet(str.MyStrGet());
}

MyString::MyString(std::initializer_list<char> str)
{
	lenght = str.size();
	this->str = new char[lenght + 1];

	for (int i = 0; i <= lenght; i++)
		this->str[i] = str.begin()[i];
	this->str[lenght] = '\0';
}

void MyString::MyStrSet(const char* str)
{
	if (this->str != nullptr) MyStrClear();

	int len = LenDefine(str);
	TakeMemor(len);

	for (int i = 0; i < len + 1; i++)
		this->str[i] = str[i];
}

const char* MyString::MyStrGet() const
{
	return str;
}

void MyString::MyStrClear()
{
	delete[] str;
	str = nullptr;
	lenght = 0;
}

void MyString::MyStrInit()
{
	char byffer[STR_LENGHT_DEFAULT + 1] = {};
	std::cin >> byffer;
	MyStrSet(byffer);
}

void MyString::MyStrCpy(MyString& obj)
{
	MyStrSet(obj.MyStrGet());
}

bool MyString::MyStrStr(const char* str) const
{
	int len = LenDefine(str);

	for (int i = 0; i < this->lenght; i++)
		for (int y = 0; y < len; y++)
			if (this->str[i + y] != str[y]) break;
			else if (y == len - 1) return true;
	
	return false;
}

int  MyString::MyChr(char c) const
{
	for (int i = 0; i < lenght; i++)
		if (str[i] == c) return i;
	return -1;
}

int MyString::MyStrLen()
{
	return lenght;
}

void MyString::MyStrCat(MyString& b)
{
	int newLen = lenght + b.MyStrLen();
	char* newStr = new char[newLen + 1];

	for (int i = 0; i < lenght; i++)
		newStr[i] = str[i];
	for (int i = 0; i < b.MyStrLen() + 1; i++)
		*(newStr + i + lenght) = b.MyStrGet()[i];

	MyStrClear();	
	str = newStr;
	lenght = newLen;
}

void MyString::MyDelChr(char c)
{
	int bias = 0;
	for (int i = 0; i < lenght; i++)
	{
		while (str[i + bias] == c) bias += 1;
		if (i + bias > lenght) break;
		str[i] = str[i + bias];
	}
}

int MyString::MyStrCmp(MyString& b)
{
	if (lenght < b.MyStrLen()) return -1;
	else if (lenght > b.MyStrLen()) return 1;
	else return 0;
}

int MyString::MyStrCount()
{
	return count;
}

//Äç ¹12
MyString& MyString::operator= (const MyString& str)
{
	if (&str != this) MyStrSet(str.MyStrGet());
	return *this;
}

void MyString::operator() ()
{
	std::cout << str << std::endl;
}

char MyString::operator[] (int i)
{
	if (i >= 0 && i <= lenght) return str[i];
	else return NULL;
}

MyString::operator MyString && ()
{
	return std::move(*this);
}

MyString::operator char* ()
{
	return str;
}

MyString::operator int()
{
	return lenght;
}