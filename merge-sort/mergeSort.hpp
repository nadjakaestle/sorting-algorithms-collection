#include <iostream>
#include <fstream>
#include <vector>
// divsão do vetor.
// concatenação.

int lerArquivo(std::vector<int> &A)
{
    int arquivo;
    std::ifstream infile("num.1000.1.txt");

    while (infile >> arquivo)
    {
        A.push_back(arquivo);
    }
}

// função que concatena dois arrays
void merge(std::vector<int> &array, int esquerdaIndex, int meio, int direitaIndex)
{
    int i, j, k;
    int n1 = meio - esquerdaIndex + 1;
    int n2 = direitaIndex - meio;

    // arays temporários
    int L[n1], R[n2];

    //copiar dados para os arrays
    for (i = 0; i < n1; i++)
    {
        L[i] = array[esquerdaIndex + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = array[meio + 1 + j];
    }
    // merge nos arrays
    i = 0;
    j = 0;
    k = esquerdaIndex;
    // compara os elementos dos subarrays e juntam eles
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    // copia elementos restantes de L
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    // copia os elementos restantes de R
    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }

    //  print(array, esquerdaIndex, direitaIndex);
}

// função recursiva que divide o array até sobrar um
void mergeSort(std::vector<int> &array, int esquerdaIndex, int direitaIndex)
{
    // std::cout << esquerdaIndex << " " << direitaIndex << std::endl;

    int meio;
    if (esquerdaIndex < direitaIndex)
    {
        meio = esquerdaIndex + (direitaIndex - esquerdaIndex) / 2; // divide o array no meio em 2 partes

        // recursão chamada até  esqueda < direita (ordenação)
        mergeSort(array, esquerdaIndex, meio);
        mergeSort(array, meio + 1, direitaIndex);

        merge(array, esquerdaIndex, meio, direitaIndex);
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