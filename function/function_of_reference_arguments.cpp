// function of reference arguments.cpp
// ѧϰ���������ô���

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

// ��������
vector<int>::const_iterator find_val(
	// ��������
	vector<int>::const_iterator beg,
	vector<int>::const_iterator end,
	int value,
	vector<int>::size_type &occurs
	) {
		// �տ�ʼ res_iter �洢����Ϊֹ���Ҳ����ͻ�ֱ�ӷ���
		vector<int>::const_iterator res_iter = end;
		occurs = 0;
		for ( ; beg != end; ++ beg) {
			// ����ҵ���
			if (*beg == value) {
				if (res_iter == end)
					res_iter = beg;
				// �ҵ��˼���
				++ occurs;
			}
		}

		// ����
		return res_iter;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// ��������
	int a[] = {1, 42, 54, 7, 3, 1, 43, 42};
	// ���岢��ʼ������
	vector<int> ivector(a, a + 8);
	vector<int>::size_type ctr;
	vector<int>::const_iterator it;
	// ���ú���
	it = find_val(ivector.begin(), ivector.end(), 42, ctr);
	cout << *it << " �����ˣ� " << ctr << "�Σ�" << endl;
	system("pause");
	return 0;
}
