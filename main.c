#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"
int main(){
    int N = 8, dados[8] = {50,100,30,20,40,45,35,37};

    ArvBin* raiz = cria_ArvBin();

    int i;
    for(i=0; i < N; i++)
        insere_ArvBin(raiz,dados[i]);

    printf("Avore de busca %d",arvorebusca(raiz));
   /* int p=profundidade(raiz, 37);
    printf("Profundidade do no= %d ",p);
   /* int h = altura_ArvBin(raiz);
    h=h-1;
  
   int u;
    u= quasecompleta(raiz,h,0,1);
    printf("%d\n",u);
    if(u==0)
      printf("Ávore quase completa");
   */
    //buscalargura_ArvBin(raiz);
    libera_ArvBin(raiz);

   return 0;
}
