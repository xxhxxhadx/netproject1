#include "getrow.h"
int getrow(char *filename)
{
	ifstream ReadFile;
	int n = 0;
	char line[512];
	ReadFile.open(filename, ios::in);//ios::in ��ʾ��ֻ���ķ�ʽ��ȡ�ļ�
	if (ReadFile.fail())//�ļ���ʧ��:����0
	{
		return 0;
	}
	else//�ļ�����
	{
		while (!ReadFile.eof())
		{
			ReadFile.getline(line, 512, '\n');
			n++;
		}
		return n;
	}

	ReadFile.close();
}
