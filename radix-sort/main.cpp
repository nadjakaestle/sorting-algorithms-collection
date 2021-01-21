#include <iostream>
#include "Radixsort.hpp"

int main()
{
    std::vector<int> A;
    lerArquivo(A);
    int s = menorValor(A);
    shift(A, s);
    radixSort(A, s);

    for (int i = 0; i < A.size(); i++)
    {
        std::cout << "A[" << i << "] = " << A[i] << std::endl;
    }
}