#include <stdio.h>
#include <stdlib.h>
#include "Troca.h"

int main(){
    TLista x[MAXTAM];

    FLVazia(x);

    Limprime(x);
    
    printf("Preencha a lista \n");
    for(int i=0; i<5; i++){
        TItem item;
        printf("Posicao %d: ", i+1);
        scanf("%d", &item);
        Linsere(x, &item);
    }
    printf("\nLista antes das trocas:\n");
    Limprime(x);


    int a,b;
    printf("\nInforme os valores que serao trocados um de cada vez:\n");
    printf("Trocar: ");
    scanf("%d", &a);
    printf("Por: ");
    scanf("%d", &b);

    Troca(x, a, b);

    printf("\nLista apos as trocas:\n");
    Limprime(x);
    printf("\n\n\n");

    system("pause");
    return 0;
}
