#include <stdio.h>
#include <cs50.h>

int main (void) {
 string name = get_string ("Hello! What you name? ");
 printf ("Hello, %s!\n", name);
 return 0;
}