#include <iostream>
using namespace std;

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    cout<< "Entre first number : "<<"\n"; // Printf("Entre first number : \n");
    cin >> iNo1;    // scanf("%d", iNo1);

    cout<< "Entre seceond number : "<<"\n"; // Printf("Entre second number : \n");
    cin >> iNo2;    // scanf("%d", iNo2);

    iAns = iNo1 + iNo2;

    cout<<"Additon is : "<<iAns<<"\n";      // printf("Aditon is : %d", iAns);
    return 0;
}