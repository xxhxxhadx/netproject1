#include "add.h"

int ** add(int ** arr)
{

	cout <<"请输入加入节点的权值"<< endl << endl << endl;
	int crow = row + 1;
	int *arry = NULL;
	arry = new int[row];
	for (int i = 0; i < row; i++)cin >> arry[i];
	int **arrt = NULL;
	arrt = new int*[crow];//开辟一块内存来存放每一行的地址
	for (int i = 0; i < crow; i++)//分别为每一行开辟内存
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
