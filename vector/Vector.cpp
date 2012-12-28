// Vector.cpp : 定义控制台应用程序的入口点。
// 持续输入字符串直到结束
// 将输入的字符串push进vector中

#include "stdafx.h"

// 声明命名空间
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	// 不间断地输入字符串
	string word;
	vector<string> text;
	while (cin >> word) {
		text.push_back(word);
	}
	// 输入完毕，使用vector的迭代器输出每一个字符串
	for (vector<string>::const_iterator iter = text.begin(); 
			iter != text.end(); ++ iter)
			cout << *iter << endl;
	system("pause");
	return 0;
}