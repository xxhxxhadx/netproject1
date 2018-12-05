#include "cnm.h"

void cnm(int ** ary)
{
	fstream outfile("D:\\ccccc\\shuju.txt", ios::out);
	if (!outfile) {
		cout << "文件打开失败！";
		return;
	}
	for (int i = 0; i<row; ++i) {
		for (int j = 0; j<row; ++j)outfile << ary[i][j]<<' ';
		outfile << endl;
	}
	outfile.close();
}
