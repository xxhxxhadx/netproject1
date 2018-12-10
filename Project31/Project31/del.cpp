#include "del.h"

#include<iostream>
using namespace std;
int ** del(int ** ary)
{
	cout << "梁弘健" << endl;
	int *ary1;
	ary1 = new int[row];
	for (int i = 0; i < row; i++)ary1[i] = i + 1;
	int col = row;
	int n, k = 0, f = 0, i = 0;
	while (1) {
		cout << "请输入需要删除的节点:";
		while (!(cin >> n)) {
			cout << "输入无效，请重新输入:";
			cin.clear();
			cin.ignore();
		}
		if (n>row) {
			cout << "不存在该路由器！" << endl;
			continue;
		}
		break;
	}
	for (; (*ary1 != n); ++i)++ary1;//寻找要删除的元素
	for (int j = 0; j<row; ++j)ary[i][j] = 999;
	for (int k = 0; k<row; ++k)ary[k][i] = 999;
	cout << endl;
	return ary;
}
