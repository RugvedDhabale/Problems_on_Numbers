#include <stdio.h>

int main()
{
    int Z = 0;
    int X = 11; 

    const int Y  = 11;

    X++; 
    // Z = Y++;
    if(Z == 12)
    {
        printf("Increment done!");
    }
    else 
    printf("Naughty hora ke!!!");

    return 0; 
}