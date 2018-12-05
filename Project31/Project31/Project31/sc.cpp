#include "sc.h"

int ** sc(){
	ifstream in;
	in.open("D:\\ccccc\\shuju.txt", ios::in);
	int **arr;
	//cin >> row;
	arr = new int*[row];//开辟一块内存来存放每一行的地址
	for (int i = 0; i < row; i++)//分别为每一行开辟内存
		arr[i] = new int[row];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < row; j++) {
			in >> arr[i][j];
		}
	return arr;
}
