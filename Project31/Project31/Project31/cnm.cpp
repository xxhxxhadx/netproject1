#include "cnm.h"

void cnm(int ** ary)
{
	fstream outfile("D:\\ccccc\\shuju.txt", ios::out);
	if (!outfile) {
		cout << "�ļ���ʧ�ܣ�";
		return;
	}
	for (int i = 0; i<row; ++i) {
		for (int j = 0; j<row; ++j)outfile << ary[i][j]<<' ';
		outfile << endl;
	}
	outfile.close();
}
