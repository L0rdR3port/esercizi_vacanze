#include<stdio.h>
#include "domande_anagrafica.h" 

Bool domande_anagrafica(void){
    char risposta;
    printf("Sei nato? [si],[no]");
    scanf(" %c", &risposta);
    if(risposta == 's')
    return FALSE;

    printf ("Hai più di 18 anni? [si], [no]");
    scanf(" %c", &risposta);
    if(risposta == 's' ) return FALSE;

    printf ("Ti senti giovane? [si], [no]"); 
    scanf(" %c", &risposta);
    if(risposta == 's')
    return FALSE;

    return TRUE;


}