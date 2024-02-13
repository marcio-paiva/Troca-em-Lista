#include <stdio.h>
#include <stdlib.h>
#include "Troca.h"

void FLVazia (TLista* pLista) {  //criando uma lista com cabeça
    pLista->pPrimeiro = (TCelula*) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pPrimeiro->pProx = NULL;
}

void Linsere (TLista* pLista, TItem* pItem) {    //inserindo em uma lista implementada por ponteiros e com cabeça
    pLista->pUltimo->pProx = (TCelula*) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->item = *pItem;
    pLista->pUltimo->pProx = NULL;
    }

void Limprime (TLista* pLista) {
    TCelula* pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL) {
        printf("%d\n", pAux->item.chave);
        pAux = pAux->pProx; 
    }
}

void Troca(TLista* pLista, int i, int j){
    TCelula *pAuxI; //celula auxiliar para percorrer a lista em busca do valor informado "i"
    int temp;
    pAuxI = pLista->pPrimeiro->pProx; //Posiciona a celula auxiliar no primeiro elemento da lista
    while (pAuxI->pProx != NULL && pAuxI->item.chave != i) { //testa se a lista não esta vazia e se o elemento é igual ao procurado
        pAuxI = pAuxI->pProx; //avança na lista para novo teste
    }
    if(pAuxI->item.chave == i){ //testa se o valor informado esta na lista
        temp = pAuxI->item.chave; //grava o item i em uma variável temporária
    }else{
        printf("\nO primeiro valor informado nao esta na lista.\n");
    }
    TCelula *pAuxJ;
    pAuxJ = pLista->pPrimeiro->pProx;
    while (pAuxJ->pProx != NULL && pAuxJ->item.chave != j) {
        pAuxJ = pAuxJ->pProx;
    }
    if(pAuxJ->item.chave == j){ //testa se o valor informado esta na lista
        pAuxI->item.chave = pAuxJ->item.chave;
        pAuxJ->item.chave = temp;
    }else{
        printf("\nO segundo valor informado nao esta na lista.\n");
    }
}