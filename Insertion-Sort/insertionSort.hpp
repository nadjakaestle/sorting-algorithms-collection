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

void insertionSort(std::vector<int> &array, int a)
{
    int i, j, aux;
    for (i = 0; i < a; i++)
    {
        j = i;
        while ((j > 0) && (array[j] < array[j - 1]))
        {
            aux = array[j];
            array[j] = array[j - 1];
            array[j - 1] = aux;
            j = j - 1;
        }
    }
}

void printarArray(std::vector<int> array, int a)
{
    int i;
    for (i = 0; i < a; i++)
    {
        printf("%d \n", array[i]);
    }
    printf("\n");
}
