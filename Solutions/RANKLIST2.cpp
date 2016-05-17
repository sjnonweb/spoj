#include <iostream>
#define sizee 100001
using namespace std;

int main()
{
    long long test,i,n,sum,nth,pSUM,temp,tempn;
    cin>>test;
    while(test--)
    {
        cin>>n>>sum;
        i=0;
        nth=1+(n-1);
        pSUM=((1+nth)*n)/2;
        if(pSUM==sum)
            cout<<i<<endl;
        else
        {
            temp=pSUM;
            tempn=n;
            while(temp>=sum)
            {
                tempn--;
                nth=1+(tempn-1);
                temp=((1+nth)*tempn)/2;
            }
            cout<<n-tempn<<endl;
        }

    }

    return 0;
}
