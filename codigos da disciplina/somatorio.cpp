#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float parcela = 1, soma = 0;
    for (int i=1; i<=30000; i++) soma=soma+parcela;
    printf("\nO somatorio vale %f", soma);
    system("PAUSE");
    return 0; 
}