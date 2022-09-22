#pragma once

#define STR_LENGHT_DEFAULT 80

class MyString
{
	char* str = nullptr;
	int lenght = 0;
	
	void TakeMemor(int lenght);
	int LenDefine(const char* str) const;

	static int count;

public:
	MyString();
	MyString(int len);
	MyString(const char* str);
	MyString(MyString& str);
	MyString(std::initializer_list<char> str); // - äç ¹16
	~MyString();
	
	MyString(MyString&& other) noexcept; // - äç ¹16
	MyString& operator=(MyString&& other) noexcept; // - äç ¹16

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

	operator MyString && ();

	operator char* ();
	operator int ();
};

