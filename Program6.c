//Problem Statement : Accept number from user and check whether it is divisible by 5 or not
// 1    Understand the problem statement 
// 2    Write the algorithm
// 3    Decide the programming language 

#include <stdio.h>

int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
////////////////////////////////////////////////////
// Entry point of the application 
////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Entre number : \n");
    scanf("%d", &iValue);

    iRet = DivisibleByFive(iValue);
    if(iRet == 0)
    {
        printf("%d is divisible by Five\n", iValue);
    }
    else
    {
        printf("%d is not divisible by Five\n", iValue);
    }

    return 0;
}