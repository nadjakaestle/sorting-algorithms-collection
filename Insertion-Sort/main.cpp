#include <iostream>
#include <fstream>
#include <vector>
#include "insertionSort.hpp"

int main()
{
    std::vector<int> array;
    lerArquivo(array);
    printf("Array ordenado: \n");
    insertionSort(array, array.size() - 1);
    printarArray(array, array.size());

    return 0;
}