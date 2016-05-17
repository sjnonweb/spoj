#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    unsigned int n,k,t;
    int counter=0;
    cin>>n>>k;

    while(n--)
    {
        cin>>t;
        if(t%k==0)
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
