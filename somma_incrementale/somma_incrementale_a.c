#include <stdio.h>
#include "somma_incrementale.h"

int main(void){
	int value;
	int total = 0;
	while(1){
		printf("Inserisci un numero maggiore di 0 (inserire 0 per uscire)\n");
		scanf("%d", &value);
		if(value == 0)
			break;
		total = somma(value);
	}
	printf("RISULTATO FINALE = %d\n", total);
}