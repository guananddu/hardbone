// bitse.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <bitset>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	using std::bitset;
	using std::cin;
	using std::cout;
	using std::endl;
	bitset<128> bitvec(0xffff);
	cout << "全部bitvec: " <<  bitvec << endl;
	cout << "bitvec[0]:" << bitvec[0] << endl;
	cout << "bitvec[127]:" << bitvec[127] << endl;
	system("pause");
	return 0;
}