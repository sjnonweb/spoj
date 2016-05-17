#include <iostream>
#include <stack>

using namespace std;

int main()
{
    long long int test,i,a,x,y,sum,n,d,term;
    cin>>test;
    while(test--)
    {
        cin>>x>>y>>sum;
        n=(2*sum)/(x+y);
        d=(y-x)/(n-5);
        a=x-(2*d);
        term=a;
        cout<<n<<endl;
        for(i=0;i<n;i++)
        {
            cout<<term<<" ";
            term+=d;
        }
        cout<<endl;
    }
}
