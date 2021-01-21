#include <iostream>
#include <fstream>
#include <vector>

int lerArquivo(std::vector<int> &array)
{
    int arquivo;
    std::ifstream infile("num.1000.1.txt");

    while (infile >> arquivo)
    {
        array.push_back(arquivo);
    }
}

void selectionSort(std::vector<int> &array, int a)
{
    int j, aux, tempVar;
    for (int i = 0; i < a; i++)
    {
        aux = i; //encontra o menor elemento do array
        for (j = i + 1; j < a; j++)
        {
            if (array[j] < array[aux])
                aux = j;
        }
        // troca o menor elemento encontrado pelo primeiro elemento
        tempVar = array[i];
        array[i] = array[aux];
        array[aux] = tempVar;
    }
}

void printarArray(std::vector<int> array, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d  \n", array[i]);
    }
    printf("\n");
}