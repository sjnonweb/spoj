#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;
vector<long long>dp(1000000);

long long calc(long long num,long long m)
{
    long long i,j,k;
    if(dp[num]!=0)
        return dp[num]%m;
    else
    {
        j=num;
        i=1;
        dp[num]=1;
        while(j>=1 && i<=num)
        {
            dp[num]=dp[num]*(long long)pow((double)i,j)%m;
            //dp[num]=dp[num];
            i++;
            j--;
        }
        cout<<num<<": "<<dp[num]<<endl;
        return dp[num];
    }
}

int main()
{
    dp[1]=1;
    dp[2]=2;
    long long test,num,query,m,q,i,j,k;
    cin>>test;
    while(test--)
    {
        cin>>num>>m>>query;
        for(i=0;i<query;i++)
        {
            cin>>q;
            k=(calc(num,m)/(calc(q,m)*calc(num-q,m)));
            cout<<k<<endl;
        }
    }
    return 0;
}
