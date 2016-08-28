#ifndef PILHA_VET_H
#define PILHA_VET_H

// quantidade máxima de elementos suportada
#define TAM_MAX 100
#define TRUE 1
#define FALSE 0

#define OK 0
#define ESTRUTURA_NAO_INICIALIZADA -1
#define ESTRUTURA_VAZIA -2
#define ESTRUTURA_CHEIA -3

// declaração da estrutura de uma pilha
typedef struct {
    int itens[TAM_MAX];
    int topo;
} PilhaVet;

PilhaVet* criarPilha();
int liberarPilha(PilhaVet* pilha);
int estahVaziap(PilhaVet* pilha);
int estahCheiap(PilhaVet* pilha);
int empilhar(int item, PilhaVet* pilha);
int desempilhar(PilhaVet* pilha, int* item);
int obterTopo(PilhaVet* pilha, int* item);

#endif // PILHA_VET_H
