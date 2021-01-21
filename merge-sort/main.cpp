#include <iostream>
#include <fstream>
#include <vector>
#include "mergeSort.hpp"

int main()
{
    std::vector<int> array;
    lerArquivo(array);
    mergeSort(array, 0, array.size() - 1);
    printarArray(array, array.size());

    return 0;
}
