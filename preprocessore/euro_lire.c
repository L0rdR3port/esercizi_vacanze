#include<stdio.h>

#define CONVERTION 1936.27

#define EURO_LIRE(euro) (euro)*CONVERTION
#define LIRE_EURO(lire) (lire)/CONVERTION

int main(){
        int scelta;
        double input_value;
        printf("Inserire 1 per convertire gli euro in lire\n");
        printf("Inserire 2 per convertire le lire in euro\n");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:
                    printf("Inserire la quantita di euro da convertire in lire\n");
                    scanf("%lf", &input_value);
                    printf("%.2f (euro) --> %.2f (lire)\n", input_value, EURO_LIRE(input_value));
                    break;

            case 2:
                    printf("Inserire la quantita di lire da convertire in euro\n");
                    scanf("%lf", &input_value);
                    printf("%.2f (lire) --> %.2f (euro)\n", input_value, LIRE_EURO(input_value));
                    break;

            default:
                    printf("Operazione non riconosciuta\n");
        }

    return 0;
}