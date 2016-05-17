#include <iostream>

using namespace std;

int main()
{
    int test,a,b,i,j,ans;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        ans=1;
        while(b>0)
        {
            if(b%2==1)
            {
                ans=(ans*a)%10;
                b--;
            }
            b=b/2;
            a=(a*a)%10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
