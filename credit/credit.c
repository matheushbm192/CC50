#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int numero = get_int("numero do cartao: ");
    numero = numero % 1000;
    printf("%i", numero);
}