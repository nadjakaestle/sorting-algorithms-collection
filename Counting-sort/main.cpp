#include <iostream>
#include "Counting sort.hpp"

int main()
{
    std::vector<int> A;
    std::vector<int> B;
    lerArquivo(A);

    int s = menorValor(A);

    shift(A, s);

    int k = maiorValor(A);

    B.resize(A.size());

    countingSort(A, B, k, s);

    for (int i = 0; i < A.size(); i++)
    {
        std::cout << "B[" << i << "] = " << B[i] << std::endl;
    }
}