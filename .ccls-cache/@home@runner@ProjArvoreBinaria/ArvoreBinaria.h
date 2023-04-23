
typedef struct NO* ArvBin;


int arvorebusca(ArvBin *raiz);
void buscalargura_ArvBin(ArvBin *raiz);

int quasecompleta(ArvBin *raiz,int h,int c,int r);
int profundidade(ArvBin *raiz, int valor_no);
ArvBin* cria_ArvBin();
void libera_ArvBin(ArvBin *raiz);
int insere_ArvBin(ArvBin* raiz, int valor);
int remove_ArvBin(ArvBin *raiz, int valor);
int estaVazia_ArvBin(ArvBin *raiz);
int altura_ArvBin(ArvBin *raiz);
int totalNO_ArvBin(ArvBin *raiz);
int consulta_ArvBin(ArvBin *raiz, int valor);
void preOrdem_ArvBin(ArvBin *raiz);
void emOrdem_ArvBin(ArvBin *raiz);
void posOrdem_ArvBin(ArvBin *raiz);

