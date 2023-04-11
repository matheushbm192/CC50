#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    int resto;
    int moedas = 0;


    float troco; // valor pago pelo cliente

    do // verifica se o valor recebido pelo cliente é positivo
    {

        troco = get_float("Digite o valor pago pelo cliente: ");

    }
    while (troco < 0.00);


    int trocoInteiro = round(troco * 100);
    // printf("%i troco inteiro: ", trocoInteiro);

    if (trocoInteiro < 0) // valida se o cliente possui dinheiro o suficiente
    {
        printf("Dinheiro insuficiente\n");
    }
    else // posssui
    {

        if (trocoInteiro >= 25) // filtro de 25centavos
        {
            moedas = trocoInteiro / 25; // cacula a quantidade de moedas
            trocoInteiro = trocoInteiro % 25; //acumula a sobra para o proximo filtro

            printf("%i m\n", moedas); // monitoramento
            printf("%i r\n", trocoInteiro);
        }
        if (trocoInteiro >= 10) // filtro de 10 centavos
        {
            moedas = moedas + (trocoInteiro / 10); //acumula as moedas
            trocoInteiro = trocoInteiro % 10;

            printf("%i l\n", moedas);
            printf("%i z\n", trocoInteiro);
        }
        if (trocoInteiro >= 5) // filtro de 5 centavos
        {
            moedas = moedas + (trocoInteiro / 5);
            trocoInteiro = trocoInteiro % 5;

            printf("%i k\n", moedas);
            printf("%i p\n", trocoInteiro);
        }
        if (trocoInteiro >= 1) // filtro de 1 centavo
        {
            moedas = moedas + (trocoInteiro / 1);
            //trocoInteiro = trocoInteiro % 1;

            printf("%i s\n", moedas);
            printf("%i f\n", trocoInteiro);
        }

        printf("%i\n", moedas);



    }

}