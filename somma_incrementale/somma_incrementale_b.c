#include<stdio.h>

int somma(int value){
	static int count = 0;
	count++;
	printf("Somma: chiamata n %d\n", count);
    printf("Somma: chiamate totali %d\n", count);
	static int tmp_total = 0;
	tmp_total += value;
	printf("Somma temporanea = %d\n", tmp_total);
	return tmp_total;
}