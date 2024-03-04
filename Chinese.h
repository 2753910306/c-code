#pragma once
#include <string>
#include <iostream>

using namespace std;
class Chinese
{
public:
	Chinese();
	~Chinese();

	//char*ת��Ϊwchar_t*
	wchar_t* MBCSToUnicode(wchar_t* buff, const char* str);
	//wchar*ת��Ϊchar*
	char* unicodeToMBCS(char* buff, const wchar_t* str);
	//stringתwstring
	std::wstring strToWstr(std::string& input);
	std::string wstrToStr(std::wstring& wstr);

	char* wstrToChar(std::wstring& wstr);
	char* wstrToChar(const wchar_t* wstr);
};
