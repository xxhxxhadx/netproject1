#include "generate.h"

void generate(int ** POW, int x)
{
	int temp;
	int *t;
	t = new int[row];
	int *distance;
	distance = new int[row];
	for (int i = 0; i < row; i++)t[i] = i;
	for (int i = 0; i < row; i++)distance[i] = POW[x][i];
	for (int n = 1; n < row; n++) {
		int m = imin(n + 1, distance);
		for (int i = 0; i < row; i++) {
			temp = distance[i];
			distance[i] = min(distance[i], distance[m] + POW[m][i]);
			if (temp != distance[i]) {
				t[i] = m;
				int tmp = m;
				while (t[m] != m) {
					t[i] = t[m];
					m = t[i];
				}
				m = tmp;
			}
		}
	}
	cout << "下一跳：" << endl;
	for (int i = 0; i < row; i++)cout << i+1 << "->" << t[i] << endl;
	cout << x << "的最短路径：" << endl;
	for (int i = 0; i < row; i++)cout << x+1 << "   to   " << i+1 << "   is		" << distance[i] << endl;
}
