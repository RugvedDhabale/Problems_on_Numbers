#include <stdio.h>

/* 
    Start : from user
    End : till 1
    Displacement : 1
*/

void DiplayReverse(int iNo)
{
    int iCnt = 0;

    printf("_________________________\n");
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    printf("\n_________________________\n");

    
}

int main()
{
    int iValue = 0;

    printf("Entre number : \n");
    scanf("%d", &iValue);

    DiplayReverse(iValue);

    return 0;
}