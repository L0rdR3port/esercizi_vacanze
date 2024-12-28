#include<stdio.h>
#include"math.h"

float raggio;

int main(){
    printf("Inserisci il raggio del cerchio\n");
    scanf("%f", &raggio);

    printf("Il perimetro del cerchio è: %.2f cm\n", PERIMETRO(raggio));
    printf("L'area del cerchio è: %.2f cm2\n", AREA(raggio));
}