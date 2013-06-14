// function of reference arguments.cpp
// 学习函数的引用传参

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

// 函数定义
vector<int>::const_iterator find_val(
	// 参数定义
	vector<int>::const_iterator beg,
	vector<int>::const_iterator end,
	int value,
	vector<int>::size_type &occurs
	) {
		// 刚开始 res_iter 存储结束为止，找不到就会直接返回
		vector<int>::const_iterator res_iter = end;
		occurs = 0;
		for ( ; beg != end; ++ beg) {
			// 如果找到了
			if (*beg == value) {
				if (res_iter == end)
					res_iter = beg;
				// 找到了几个
				++ occurs;
			}
		}

		// 返回
		return res_iter;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// 定义数组
	int a[] = {1, 42, 54, 7, 3, 1, 43, 42};
	// 定义并初始化容器
	vector<int> ivector(a, a + 8);
	vector<int>::size_type ctr;
	vector<int>::const_iterator it;
	// 调用函数
	it = find_val(ivector.begin(), ivector.end(), 42, ctr);
	cout << *it << " 出现了： " << ctr << "次！" << endl;
	system("pause");
	return 0;
}
