#include "del.h"

int ** del(int ** ary)
{
	int *ary1;
	ary1 = new int[row];
	for (int i = 0; i < row; i++)ary1[i] = i;
	int **head = NULL;
	int col = row;
	int n, k = 0, f = 0, i = 0;
	cout << "��������Ҫɾ���Ľڵ�:";
	cin >> n;
	for (; *ary1 != n; ++i)++ary1;//Ѱ��Ҫɾ����Ԫ��
	head = new int *[row - 1];//������
	for (int j = 0; j<col - 1; ++j)head[j] = new int[col - 1];//������
	k = 0;
	for (int j = 0; j<row; ++j) {//���ж�ά����ĸ���
		if (j == i)continue;
		f = 0;
		for (int g = 0; g<col; ++g) {
			if (g == i)continue;
			head[k][f] = ary[j][g];
			++f;
		}
		++k;
	}
	row--;
	cout << endl;
	return head;
}
