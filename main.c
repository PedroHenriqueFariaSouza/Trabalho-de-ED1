#include <stdio.h>
#include <stdlib.h>
#include "FilaVet.h"
#include "PilhaVet.h"
#include "ListaVet.h"

int main()
{

    FilaVet* minhafila = criarFila();
    PilhaVet* minhapilha = criarPilha();
    ListaVet* minhalista = criarLista();
    int item,colocar,removendo1,removendo2,removendo3;
while(scanf("%d",&item)!= EOF){
    for(int i = 0; i< item;i++){
    int gravaroudesgravar;
    scanf("%d",&gravaroudesgravar);
    scanf("%d",&colocar);
        if (gravaroudesgravar==1)
        {
        inserirf(minhafila,colocar);
        empilhar(colocar,minhapilha);
        inserirl(minhalista,colocar,i);
        }
        if (gravaroudesgravar==2)
        {
        removerf(minhafila,&removendo1);
        desempilhar(minhapilha,&removendo2);
        removerl(minhalista,&removendo3,i);
        }
       /* if (r)
        {
        printf("queue");
        }
        if (removendo2!=colocar)
        {
        print("stack");
        }
        if (colocar)
        {
        printf("priority queue");
        }
        if ()
        {
        printf("impossible");
        }
        if ()
        {
        printf("not sure");
        }*/

    }
}
    return 0;



}


