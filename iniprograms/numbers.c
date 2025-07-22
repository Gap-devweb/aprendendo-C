#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int ("Digite um número inteiro: ");
    int n2 = get_int ("Digite outro número inteiro: ");
    if (n>n2)
    {
        printf ("%i é maior que %i.\n", n,n2);
    }
    else if (n<n2) 
    {
        printf ("%i é menor que %i.\n", n,n2);
    }
    else 
    {
        printf ("%i é igual a %i.\n", n,n2);
    }     
    return 0;
}