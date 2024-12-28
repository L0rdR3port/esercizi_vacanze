#include<stdio.h>

#define CUBO(x) (x)*(x)*(x)

int num;

int main(){
    printf("Inserisci il numero da calcolare al cubo\n");
    scanf("%d", &num);

    printf("%d*%d*%d=%d\n", num, num, num, CUBO(num));
}