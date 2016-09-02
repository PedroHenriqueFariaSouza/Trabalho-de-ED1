#include <stdio.h>
#include <stdlib.h>
#include "FilaVet.h"
#include "PilhaVet.h"
#include "ListaVet.h"

int main()
{
/*
    FilaVet* minhafila = criarFila();
    PilhaVet* minhapilha = criarPilha();
    ListaVet* minhalista = criarLista();
    int item,colocar,removendo1,removendo2,removendo3,controlador1=1,controlador2=1,controlador3=1,i;
    while(scanf("%d",&item)!= EOF)
    {
        for(int i = 0; i< item; i++)
        {
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
                if (removendo1!=colocar)
                {
                    controlador1=0;
                }
                if (removendo2!=colocar)
                {
                    controlador2=0;
                }
                if (removendo3!=colocar)
                {
                    controlador3=0;
                }
            }


        }
        if ((controlador1+controlador2+controlador3)==0)
        {
            printf("impossible\n");
        }
        else if (((controlador1+controlador2)==2)||((controlador2+controlador3==2))||((controlador1+controlador3==2)))
        {
            printf("not sure\n");
        }

        else if (controlador1==1)
        {
            printf("queue\n");
        }
        else if (controlador2==1)
        {
            printf("stack\n");
        }
        else if (controlador3==1)
        {
            printf("priority queue\n");
        }

        controlador1=1;controlador2=1;controlador3=1;


    }

*/
int i,item;
 ListaVet* minhalista = criarLista();
 inserirl(minhalista,10,0);
 inserirl(minhalista,5,1);
 inserirl(minhalista,0,2);
 inserirl(minhalista,9,3);
  for (i=10;i<0;i++)
{
removerl(minhalista,&item,i);
printf(" %d ",item);
}
    return 0;



}


