#include <stdio.h>
#include <cs50.h>

int main (void) {
    printf ("Hello world!\n");
    string nome = get_string ("Qual seu nome? ");
    printf ("Oi, %s!\n", nome);
    char resposta = get_char ("Você quer que eu some 2 números? (s/n)\n");
    if (resposta == 's' || resposta == 'S')
        {
        float n1 = get_float ("Digite um número e pressione ENTER. Após isso digite outro número e pressione ENTER novamente, ao final sua soma estará pronta!\n Número 1: ");
        float n2 = get_float ("Número 2: \n");
        float soma = (n1+n2);
        printf ("A soma deu %f!\n", soma);
        }
    else if (resposta == 'n' || resposta == 'N')
        {
            printf ("Ok! Obrigado por usar o programa!\n");
        }
    else 
        {
            printf ("Digite uma das respostas válidas (s/n), por favor!\n");
        }
    return 0;        
}