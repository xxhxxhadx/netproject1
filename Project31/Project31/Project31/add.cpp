#include "add.h"

int ** add(int ** arr)
{

	cout <<"���������ڵ��Ȩֵ"<< endl << endl << endl;
	int crow = row + 1;
	int *arry = NULL;
	arry = new int[row];
	for (int i = 0; i < row; i++)cin >> arry[i];
	int **arrt = NULL;
	arrt = new int*[crow];//����һ���ڴ������ÿһ�еĵ�ַ
	for (int i = 0; i < crow; i++)//�ֱ�Ϊÿһ�п����ڴ�
		arrt[i] = new int[crow];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			arrt[i][j] = arr[i][j];
		}
		arrt[i][crow - 1] = arry[i];
	}
	for (int i = 0; i < row; i++) {
		arrt[crow - 1][i] = arry[i];
	}
	arrt[crow - 1][crow - 1] = 0;
	row = crow;
	arr = arrt;
	return arr;
}
