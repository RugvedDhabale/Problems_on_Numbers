/* WAP to add the factors of number entred */

#include <stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Entre number : \n");
    scanf("%d\n", &iValue);

    iRet = SumFactors(iValue);
    printf("Summation of Factors are : %d\n", iRet);

    return 0;

}