#include <iostream>
using namespace std;

class Arithmaitc
{
    public:
        int Addition(int iValue1, int iValue2)
        {
            int iAdd = 0;

            iAdd = iValue1 + iValue2;

            return iAdd;
        }
};


int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    cout<< "Entre first number : "<<"\n"; // Printf("Entre first number : \n");
    cin >> iNo1;    // scanf("%d", iNo1);

    cout<< "Entre seceond number : "<<"\n"; // Printf("Entre second number : \n");
    cin >> iNo2;    // scanf("%d", iNo2);

    Arithmaitc obj;     // Object creation

    iAns = obj.Addition(iNo1, iNo2);    // iAns = Adition(iNo1, iNo2)

    cout<<"Additon is : "<<iAns<<"\n";      // printf("Aditon is : %d", iAns);
    return 0;
}