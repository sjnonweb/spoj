#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int test,n,i,j,sum;
    cin>>test;
    while(test--)
    {
        getchar();
        cin>>n;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>j;
            sum=(sum+j)%n;
        }
        if(sum==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
