#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    int i = 0;
    int lhamasNascidas;
    int lhamasMortas;
    int totalLhamas;
    int gerado;
    int numeroInicial;
    int numeroFinal;

    do // Numero Inicial deve ser maior que 9
    {
        numeroInicial = get_int("Quantas lhamas há: ");
    }
    while(numeroInicial < 9);

    do // numero final deve ser maior que o numero inicial
    {
        numeroFinal = get_int("Quantas lhamas hávera:");
    }
    while(numeroFinal < numeroInicial);


    totalLhamas = numeroInicial;
   if (numeroInicial != numeroFinal)
    {

      do
    {

        totalLhamas = totalLhamas + (totalLhamas / 3) - (totalLhamas / 4);//nascidas




        i = i + 1;
    }
    while(totalLhamas < numeroFinal);

    }


     printf("Years: %i\n", i);
}