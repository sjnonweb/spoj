#include <iostream>

using namespace std;

int main()
{
    long long test,n,sum,nth,pSUM;
    cin>>test;
    while(test--)
    {
        cin>>n>>sum;
        nth=(1+(n-1));
        pSUM=(((1+nth)*n)/2);
        if(sum==pSUM)
            cout<<"0"<<endl;
        else if(n==sum)
            cout<<n-1<<endl;
        else
            cout<<(pSUM/sum)<<endl;
    }
    return 0;
}
