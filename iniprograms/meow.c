#include <stdio.h>
#include <cs50.h>
void meow (int i);
int get_positive_number (void);
int main ()
{
    char resposta = get_char ("Oi! Você quer brincar com o gato?(s/n)\n");
    if (resposta == 's' || resposta == 'S')
    {
        int i = get_int ("Quantas vezes você quer que o gato mie? ");
        if (i>=0)
        {
            meow (i);
        }
        else 
        {
            int i = get_positive_number ();
            meow (i);        
        } 
    }
    else if (resposta == 'n' || resposta == 'N')
        {
            printf ("Ok! Obrigado por usar o programa!\n");
        }
    return 0;
}

int get_positive_number (void)
{
    int i;
    do
    {
    i = get_int ("O gato ainda não tem a capacidade de miar %i vezes, peça uma quantidade normal, por favor!\n", i);
    } 
    while (i<0);
    return i;   
}

void meow (int i) 
{
    for (int counter = 0;counter<i;counter++)
    {
        printf ("meow\n");
    }
}