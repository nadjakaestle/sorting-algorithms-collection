#include <iostream>
#include <fstream>
#include <vector>

//i = elementos menores ou igual ao pivo
//j = maiores elementos que o pivo
//A[i + 1] = valor do indice do pivo

//função para ler o arquivo
int lerArquivo(std::vector<int> &A)
{
    int arquivo;
    std::ifstream infile("num.1000.1.txt");

    while (infile >> arquivo)
    {
        A.push_back(arquivo);
    }
}

// função pra printar array.
void printarArray(std::vector<int> array, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d \n", array[i]);
    }
    printf("\n");
}

// funcao que pega o ultimo elemento como pivo e coloca na posição correta
int partition(std::vector<int> &A, int inicio, int fim)
{
    int pivo, i, j;

    pivo = A[fim];
    i = (inicio - 1); // endereço do menor elemento

    //checagem se o valor do array é menor que o pivor
    for (j = inicio; j <= fim - 1; j++)
    {
        //se o elemento atual de J for menor que o pivo ele vai para o lado esquedo
        if (A[j] <= pivo)
        {
            i++;

            int aux1 = A[i];
            A[i] = A[j];
            A[j] = aux1;
        }
    }
    //trocando valor do pivor
    int aux2 = A[i + 1];
    A[i + 1] = A[fim];
    A[fim] = aux2;

    //retorna o endereço do pivor
    return (i + 1);
}
//
void quickSort(std::vector<int> &A, int esquerda, int direita)
{
    if (esquerda < direita)
    {
        int q = partition(A, esquerda, direita);

        //antes e pos partição
        quickSort(A, esquerda, q - 1);
        quickSort(A, q + 1, direita);
    }
}
