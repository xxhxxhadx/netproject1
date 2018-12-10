#include "imin.h"

int imin(int i, int dis[])
{
	int *diss;
	diss = new int[row];
	int minn, j, k;
	int x = 0;
	for (j = 0; j<row; j++)  diss[j] = dis[j];
	for (k = 1; k <= i; k++) {
		for (j = 0, minn = 999; j<row; j++) {
			if (diss[j]<minn) {
				minn = diss[j];
				x = j;
			}
		}
		if (k<i)diss[x] = inf*10;
	}
	return x;
}
