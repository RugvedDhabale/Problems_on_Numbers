#include <stdio.h>

void DisplayTable(int iNo)
{
   int iCnt = 0;

   printf("Table of %d is : \n", iNo);
   printf("_____________________________________\n");
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iNo * iCnt);
    }
    printf("_____________________________________\n");
    
}

int main()
{
    int iValue = 0;

    printf("Entre number : \n");
    scanf("%d", &iValue);

    DisplayTable(iValue);   
    

    return 0;
}