#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct heap {
     int tamanho_heap; //numero de elementos no heap tamanho atual
    int comprimento; //numero possivel de elementos no arranjo "tamanho maximo"
    int * A;
}Heap;

void alocaHeap(Heap * h, int tamanhoMax){
    h->A = (int*) malloc(sizeof(tamanhoMax));
    h->tamanho_heap = tamanhoMax;
}

int pai(int i){
    return i/2;
}

int filhoEsquerda(int i){
    return 2*i+1;
}

int filhoDireita(int i){
    return 2*i+2;
};

void buildMaxHeap(Heap * h){

}

void maxHeapify(Heap * h, int i){     ///procedimento max-heapify
  int esquerda = filhoEsquerda(i);
  int direita = filhoDireita(i);
  int maior;
  int trocar; // variavél temporária.

   if((esquerda <= h->tamanho_heap) && (h->A[esquerda] > h->A[i])){
        maior = esquerda;
   }else{
        maior = i;
   }
   if((direita <= h->tamanho_heap) && (h->A[direita] > h->A[maior])){
        maior = direita;
   }
   if (maior != i){
        trocar = h->A[i];
        h->A[i] = h->A[maior];
        h->A[maior] = trocar;
        maxHeapify(h, maior);
   }
}
void heapSort(Heap * h){
    buildMaxHeap(h->A);
    int i;
    int trocar;
    for(i = h->comprimento[h->A]; i>1; i--){
        trocar = h->A[1];
        h->A[1] = h->A[i];
        h->A[i] = trocar;
        h->tamanho_heap[h->A] -= 1;
        maxHeapify(h->A, 1);
    }
}
// filas de prioridade






