#include <iostream>
#include <fstream>
#include "quickSort.hpp"

int main()
{
    std::vector<int> array;
    lerArquivo(array);
    /* for (int i = 0; i < array.size(); i++)
    {
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }*/
    quickSort(array, 0, array.size() - 1);
    printarArray(array, array.size());

    return 0;
}