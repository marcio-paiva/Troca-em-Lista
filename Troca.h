#define MAXTAM 5

typedef struct {
    int chave;
} TItem;

typedef struct TCelulaEst {
    TItem item;
    struct TCelulaEst* pProx; /* Apontador pProx; */
} TCelula;

typedef struct {
    TCelula* pPrimeiro;
    TCelula* pUltimo;
} TLista;

void FLVazia (TLista* pLista);

void Linsere (TLista* pLista, TItem* pItem);

void Limprime (TLista* pLista);

void Troca(TLista *pLista, int i, int j);

