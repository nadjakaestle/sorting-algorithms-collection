#include <stdio.h>
#include "selectionSort.hpp"

int main()
{
    std::vector<int> array;
    lerArquivo(array);

    printf("Array ordenado: \n");
    selectionSort(array, array.size() - 1);
    printarArray(array, array.size());

    return 0;
}