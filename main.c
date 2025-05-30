//Задать массив целых двузначных чисел. 
// Создать массив из неповторяющихся чисел исходного массива, вывести его на экран, в результирующем массиве не должно быть повторов.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int M[13][13], indexdif=1, lcount=0, hcount=0, max=0;
	while (hcount < 14) {
		while (lcount < 14) {
			M[hcount][lcount] = rand();
			lcount++;
		}
		hcount++;
	}
	lcount = 0, hcount = 0;
	while (hcount < 14) {
		while (lcount < 13) {
			printf("%d ", M[hcount][lcount]);
			lcount++;
		}
		printf("%d \n", M[hcount][lcount + 1]);
		hcount++;

	}
	lcount = 0, hcount = 0;
	while (hcount < 14) {
		while (lcount + indexdif < 14) {
			if (M[hcount][lcount + indexdif] > M[hcount][lcount + indexdif - 1]) { max = M[hcount][lcount + indexdif]; }
			lcount++;
			indexdif++;
		}
		hcount++;
	}
	lcount = 0, hcount = 0;
	while (lcount < 16) { printf("-"); lcount++; }
	printf("-\n");
	printf("%d", max);
	return 0;
}