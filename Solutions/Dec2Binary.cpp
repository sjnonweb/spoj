#include <iostream>

using namespace std;

int main()
{
    int i=0, num, rem[10];

    cout<<"Enter the DECIMAL number to be converted to binary:";
    cin>>num;
    while(num!=0)
    {
        rem[i]=num%2;
        num=num/2;
        i++;
    }
    i--;
    while(i>=0)
    {
        cout<<rem[i];
        i--;
    }
    return 0;
}
