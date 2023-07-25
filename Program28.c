#include <stdio.h>

int Summation(int iValue)
{
    int iSum = 0;
    int iCnt = 0;
    

    //    1         2         3
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iSum = iSum + iCnt; // 4
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iNo = 0;
    printf("Enter value : ");
    scanf("%d\n", &iNo);

    iRet = Summation(iNo);

    printf("Summation is : %d\n", iRet);

    return 0;
}