#include "sc.h"

int ** sc(){
	ifstream in;
	in.open("D:\\ccccc\\shuju.txt", ios::in);
	int **arr;
	//cin >> row;
	arr = new int*[row];//����һ���ڴ������ÿһ�еĵ�ַ
	for (int i = 0; i < row; i++)//�ֱ�Ϊÿһ�п����ڴ�
		arr[i] = new int[row];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < row; j++) {
			in >> arr[i][j];
		}
	return arr;
}
