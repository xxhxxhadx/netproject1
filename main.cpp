#include <iostream>
#include<stdlib.h>
using namespace std;

void fmenu(){
    //首先从文件中读入矩阵
    int i=0;
    cout << "**********路由表生成功能系统**********"<<endl;
    cout << "1、修改边权值"<<endl;
    cout << "2、增加顶点"<<endl;
    cout << "3、删除顶点"<<endl;
    cout << "4、生成路由表"<<endl;
    cout << "请输入执行的操作:";
    while(!(cin >> i)){
        cout << "输入无效，请重新输入操作:";
        cin.clear();
        cin.ignore();
    }
    switch(i){
    case 1://修改边权值   system("pause ");system("CLS");fmenu();break;
    case 2://增加顶点    system("pause ");system("CLS");fmenu();break;
    case 3://删除顶点    system("pause ");system("CLS");fmenu();break;
    case 4://生成路由表   system("pause ");system("CLS");fmenu();break;
    }
}

int main()
{
fmenu();
}
