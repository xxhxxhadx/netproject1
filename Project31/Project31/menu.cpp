#include "menu.h"
int row;
void menu()
{
	char a[100] = "D:\\ccccc\\shuju.txt";
	row = getrow(a)-1;
	int i; int x;
	int **POW;
	while (1) {
		cout << "1.�鿴·�ɱ�" << endl;
		cout << "2.ɾ���ڵ�" << endl;
		cout << "3.���ӽڵ�" << endl;
		cout << "0.�˳�����" << endl;
		cout << "��ѡ����Ҫʵ�ֵĹ���" << endl;
		while (!(cin >> i)) {
			cout << "�����������������:";
			cin.clear();
			cin.ignore();
		}
		switch (i) {
		case 1:POW = sc(); cout << "��������Ҫ��ѯ��·�����ţ�"; cin >> x; generate(POW, x); cout << endl; cnm(POW); break;
		case 2:POW = sc(); POW=del(POW); cout <<"ɾ���ɹ�"<<endl; cnm(POW); break;
		case 3:POW = sc(); POW=add(POW); cout<<"��ӳɹ�" << endl; cnm(POW);; break;
		case 0:exit(0); break;
		default:break;
		}
	}
}

int main() {
	////////////
	//////////////////
	////////////////
aaaaa
	menu();
}