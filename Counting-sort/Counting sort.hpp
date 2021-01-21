#include <iostream>
#include <fstream>
#include <vector>

int lerArquivo(std::vector<int> &A)
{
    int arquivo;
    std::ifstream infile("num.1000.1.in");

    while (infile >> arquivo)
    {
        A.push_back(arquivo);
    }
}
// retorna o maior elemento do vetor A
int maiorValor(std::vector<int> A)
{
    int maior = A[0];
    for (int i = 0; i < A.size(); i++)
    {

        if (maior < A[i])
        {
            maior = A[i];
        }
    }
    return maior;
}

void shift(std ::vector<int> &A, int s)
{
    for (int i = 0; i < A.size(); i++)
    {
        A[i] += s;
    }
}
int menorValor(std::vector<int> A)
{
    int menor = A[0];
    for (int i = 0; i < A.size(); i++)
    {

        if (menor > A[i])
        {
            menor = A[i];
        }
    }

    if (menor < 0)
    {
        return (menor * -1);
    }
    else
    {
        return 0;
    }
}

void countingSort(std::vector<int> A, std::vector<int> &B, int k, int s)
{
    std::vector<int> C;
    C.resize(k + 1);

    for (int i = 0; i <= k; i++)
    {
        C[i] = 0;
    }

    for (int j = 0; j < A.size(); j++)
    {
        C[A[j]] = C[A[j]] + 1;
    }

    for (int i = 1; i <= k; i++)
    {
        C[i] = C[i] + C[i - 1];
    }
    for (int j = 0; j < A.size(); j--)
    {
        B[C[A[j]] - 1] = A[j] - s;
        C[A[j]] = C[A[j]] - 1;
    }
}
