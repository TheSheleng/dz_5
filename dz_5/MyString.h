#pragma once

#define STR_LENGHT_DEFAULT 80

class MyString
{
	char* str;
	int lenght;
	
	void TakeMemor(int lenght);
	int LenDefine(const char* str) const;

	static int count;

public:
	MyString();
	MyString(int len);
	MyString(const char* str);
	MyString(MyString& str);
	~MyString();
	
	void MyStrSet(const char* str);
	const char* MyStrGet() const;
	void MyStrClear();
	void MyStrInit();

	void MyStrCpy(MyString& obj);
	bool MyStrStr(const char* str) const;
	int  MyChr(char c) const;
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);

	static int MyStrCount();

	//Äç ¹12
	MyString& operator= (const MyString& str);
	void operator() ();
	char operator[] (int i);

	operator char* ();
	operator int ();
};

