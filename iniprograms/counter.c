#include <cs50.h>
#include <stdio.h>
//Ctrl Z ou Ctrl C para encerrar o programa.
void meow (int n);
int main (void) 
{
    int n = get_int ("Quantas vezes você quer que o gato mie? ");
    if (n >= 0)
    {
        meow (n);
    }
    else if (n < 0)
    {
        while (n < 0)
        {
        printf ("O gato ainda não tem a capacidade de miar %i vezes, peça uma quantidade normal, por favor!\n", n);
        int n = get_int ("Quantas vezes você quer que o gato mie? ");  
        }
        
    }   
}




















void meow (int n)
{
    for (int counter = 0; counter < n; counter++)
    {
        printf ("meow\n");        
    }
}