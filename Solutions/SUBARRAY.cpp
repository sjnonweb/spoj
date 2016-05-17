#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;
#define n 100005
#define ll long long

char parens[n];
ll inp[n],sum[n],dp[n],maxx[n];

char opposite(char x)
{
    if(x==')') return '(';
    if(x==']') return '[';
    if(x=='>') return '<';
    if(x=='}') return '{';
    return ':';
}

int main()
{
    ll test,num,i,j,k,result;
    stack<ll> s;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&num);
        sum[0]=0;
        parens[0]='#';
        result=0;
        scanf("%s",parens+1);
        for(i=1;i<=num;i++)
        {
            scanf("%lld",&inp[i]);
            sum[i]=sum[i-1]+inp[i];
            dp[i]=0;
        }
        s.push(0);
        for(i=1;i<=num;i++)
        {
            if(parens[s.top()]==opposite(parens[i]))
            {
                dp[i]=s.top();
                //cout<<"dp["<<i<<"]: "<<dp[i]<<" ";
                s.pop();
            }
            else
                s.push(i);
        }
        //cout<<endl;
        for(i=1;i<=num;i++)
        {
            maxx[i]=0;
            if(dp[i])
            {
                maxx[i]=max( sum[i] - sum[dp[i]-1] + maxx[dp[i]-1], maxx[i]);
            }
            result=max(maxx[i],result);
        }
        printf("%lld\n",result);
        while(!s.empty())
            s.pop();
    }
    return 0;
}
