#pragma once

#define STR_LENGHT_DEFAULT 80

class MyString
{
	char* str;
	int lenght;
	
	void TakeMemor(int lenght);
	int LenDefine(const char* str);

	static int count;

public:
	MyString();
	MyString(int len);
	MyString(const char* str);
	MyString(MyString& str);
	~MyString();
	
	void MyStrSet(const char* str);
	const char* MyStrGet();
	void MyStrClear();
	void MyStrInit();

	void MyStrCpy(MyString& obj);
	bool MyStrStr(const char* str);
	int  MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);

	static int MyStrCount();
};

