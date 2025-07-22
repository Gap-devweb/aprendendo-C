#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int number = get_int ("Digite um número inteiro: ");
    printf ("Legal! %i é um número top.😃\n", number);
    return 0;
}