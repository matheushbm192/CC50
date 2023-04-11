#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int Altura;
//verifica se o numero esta entr o valor
    do
    {
        Altura = get_int("Insira um numero(maior que 1 e menor que 8): ");
    }
    while (Altura < 1 || Altura > 8);

//Constroi

    for (int i = 1; i <=  Altura; i++) //define a altura
    {
        for (int l = Altura; l > i; l--) // define os esspaços antes das hashs
        {

            printf(" ");

        }
        for (int j = 0; j < i; j++) // define as hashs antes do espaço
        {

            printf("#");

        }

        printf("  ");

        for (int d = 0; d < i; d++) // define as hashs depois do espaço
        {

            printf("#");

        }
        printf("\n"); // troca a linha

    }

}




