#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int temp,repeat=0,j;
    again:
    cin>>temp;
    while(temp)
    {
        j=temp%10;
        temp=temp/10;
        repeat=repeat+(j*j);
        temp=repeat;
    }
    cout<<repeat<<endl;
    goto again;
    return 0;
}
