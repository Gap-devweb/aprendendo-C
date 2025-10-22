#include <stdio.h>

int pyramid (height);
int main() 
{
    int height;
    printf("Let's make a pyramid! What the height of pyramid?\n");
    scanf("%i", &height);
    //condicional of cs50x
    if (height >= 1 && height <= 8)
    {
        //make the pyramid!
       pyramid(height);
    }
    else 
    {
        //asking the user for correct numbers
        do
        {
            height;
            printf("Please, enter numbers between one and eight!\n");
            scanf("%i", &height);
        } while (height < 1 || height > 8);
        pyramid(height);
    }
}    

int pyramid (height)
{
    for (int i = 0; i < height; i++)
    {
        for (int space = 1; space < height - i; space++)
        {
            printf(" ");
        }
        
        for (int blocks = 0; blocks <= i; blocks++)
        {
            printf("#");
        }
        printf("\n");
    }
}