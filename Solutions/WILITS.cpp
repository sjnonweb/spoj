#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    unsigned long long int n,a;
    cin>>n;
    a=2;
    while(a<n)
    {
        a=a*2;
    }
    if(a==n)
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
    return 0;
}
