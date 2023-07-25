// Number gets divided by three & five and print true, else false 

#include <stdio.h>
#include <stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = DivisibleByThreeAndFive(iValue);

    if(bRet == true)
    {
        printf("Number is divisble by Three and Five\n");
    }
    else
    {
        printf("Number is not divisible by Three or Five\n");
    }


    return 0;
}