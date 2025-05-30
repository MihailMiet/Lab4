//Дана целочисленная матрица 14x14.
//Найти максимум в заштрихованной области.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int M[14][14], indexdif = 0, lcount = 0, hcount = 0, max = 0, fillflag=0, num=1;
	while (hcount < 14) {
		while (lcount < 14) {
			M[hcount][lcount] = rand();
			lcount++;
		}
		lcount = 0;
		hcount++;
	}
	lcount = 0, hcount = 0;
	while (lcount < 153) { printf("-"); lcount++; }
	printf("-\n");
	lcount = 0, hcount = 0;
	while (hcount < 14) {
		while (lcount < 13) {
			printf("%9d |", M[hcount][lcount]);
			lcount++;
			num++;
		}
		lcount = 0;
		printf("%9d |\n", M[hcount][lcount + 1]);
		while (lcount < 153) { printf("-"); lcount++; }
		printf("-\n");
		lcount = 0;
		hcount++;
		num++;

	}
	num = 0;
	lcount = 0, hcount = 0;
	while (hcount < 14) {
		while (lcount + indexdif < 14) {
			if (M[hcount][lcount + indexdif] > max) { max = M[hcount][lcount + indexdif]; if (lcount > hcount) { num = lcount * hcount; } }
			lcount++;
		}
		indexdif++;
		lcount = 0;
		hcount++;
	}
	printf("%d", max);
	return 0;
}