#include <iostream>

using namespace std;

int main()
{
    long long int test,num,ans;
    cin>>test;
    while(test--)
    {
        cin>>num;
        ans=192+(num-1)*250;
        cout<<ans<<endl;
    }
    return 0;
}
