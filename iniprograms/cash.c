#include <stdio.h>

int main()
{
    int owed;
    printf("Change owed (cents): ");
    scanf("%i", &owed);
    if (owed % 25 == 0)
    {
        printf("%i", owed / 25);
    }
    
}
