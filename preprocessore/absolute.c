#include<stdio.h>

#define ABSOLUTE(value) value >= 0 ? value : -(value)

int main(void){

    int dim, i = 0;
    printf("Inserisci la quantità di valori da elaborare\n");
    scanf("%d", &dim);
    int a[dim];
    for (i = 0; i < dim; i++){

        printf ("Inserisci un numero\n");
        scanf ("%d", &a[i]);

    }

    printf("I valori assoluti dei numeri inseriti sono:\n");

    for (i = 0; i < dim; i++){

        printf("%d ", ABSOLUTE(a[i]));

    }
    
    printf("\n");

    return 0;

}