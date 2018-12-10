#include "dd.h"

int ** dsx( int ** a)
{
	int x, y, z;
	cout << "请输入所要修改的边和权值" << endl;
	cin >> x >> y >> z;
	a[x-1][y-1] = z;
	return a;
}
