#include "del.h"

#include<iostream>
using namespace std;
int ** del(int ** ary)
{
	cout << "���뽡" << endl;
	int *ary1;
	ary1 = new int[row];
	for (int i = 0; i < row; i++)ary1[i] = i + 1;
	int col = row;
	int n, k = 0, f = 0, i = 0;
	while (1) {
		cout << "��������Ҫɾ���Ľڵ�:";
		while (!(cin >> n)) {
			cout << "������Ч������������:";
			cin.clear();
			cin.ignore();
		}
		if (n>row) {
			cout << "�����ڸ�·������" << endl;
			continue;
		}
		break;
	}
	for (; (*ary1 != n); ++i)++ary1;//Ѱ��Ҫɾ����Ԫ��
	for (int j = 0; j<row; ++j)ary[i][j] = 999;
	for (int k = 0; k<row; ++k)ary[k][i] = 999;
	cout << endl;
	return ary;
}
