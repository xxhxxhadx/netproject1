#include <iostream>
#include<stdlib.h>
using namespace std;

void fmenu(){
    //���ȴ��ļ��ж������
    int i=0;
    cout << "**********·�ɱ����ɹ���ϵͳ**********"<<endl;
    cout << "1���޸ı�Ȩֵ"<<endl;
    cout << "2�����Ӷ���"<<endl;
    cout << "3��ɾ������"<<endl;
    cout << "4������·�ɱ�"<<endl;
    cout << "������ִ�еĲ���:";
    while(!(cin >> i)){
        cout << "������Ч���������������:";
        cin.clear();
        cin.ignore();
    }
    switch(i){
    case 1://�޸ı�Ȩֵ   system("pause ");system("CLS");fmenu();break;
    case 2://���Ӷ���    system("pause ");system("CLS");fmenu();break;
    case 3://ɾ������    system("pause ");system("CLS");fmenu();break;
    case 4://����·�ɱ�   system("pause ");system("CLS");fmenu();break;
    }
}

int main()
{
fmenu();
}
