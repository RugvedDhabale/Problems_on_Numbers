#include <stdio.h>

int DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
            {
                 printf("%d\n", iCnt);
            }
    }
}

int main()
{
    int iValue = 0 ;
    printf("Entre the number : \n");
    scanf("%d\n", &iValue);

    DisplayNonFactors(iValue);


    return 0;
}