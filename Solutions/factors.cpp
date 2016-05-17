#include <iostream>

using namespace std;

int main()
{
    int n, k, i, factors[100];
    cin>>n;
    k=n;
    i=0;
    while(k)
    {
        if(n%k==0)
        {
            factors[i]=k;
            i++;
        }
        k--;
    }
    for(k=0;k<i;k++)
    {
        cout<<factors[k]<<" ";
    }
    return 0;
}
