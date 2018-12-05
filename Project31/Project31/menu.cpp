#include "menu.h"
int row;
void menu()
{
	char a[100] = "D:\\ccccc\\shuju.txt";
	row = getrow(a)-1;
	int i; int x;
	int **POW;
	while (1) {
		cout << "1.查看路由表" << endl;
		cout << "2.删除节点" << endl;
		cout << "3.增加节点" << endl;
		cout << "0.退出程序" << endl;
		cout << "请选择你要实现的功能" << endl;
		while (!(cin >> i)) {
			cout << "输入错误，请重新输入:";
			cin.clear();
			cin.ignore();
		}
		switch (i) {
		case 1:POW = sc(); cout << "请输入你要查询的路由器号："; cin >> x; generate(POW, x); cout << endl; cnm(POW); break;
		case 2:POW = sc(); POW=del(POW); cout <<"删除成功"<<endl; cnm(POW); break;
		case 3:POW = sc(); POW=add(POW); cout<<"添加成功" << endl; cnm(POW);; break;
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