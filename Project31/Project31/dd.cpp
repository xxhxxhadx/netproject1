#include "dd.h"

int ** dsx( int ** a)
{
	int x, y, z;
	cout << "��������Ҫ�޸ĵıߺ�Ȩֵ" << endl;
	cin >> x >> y >> z;
	a[x-1][y-1] = z;
	return a;
}
