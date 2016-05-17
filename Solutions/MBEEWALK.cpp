#include <iostream>
#include <vector>

using namespace std;

vector<int>dp(20);
int calc(int x)
{
    if(x==2||x==4)
        return dp[x];
    else if(x%2==1)
    {
        if(dp[x-1]==0)
            return dp[x-1]=calc(x-1);
        else
            return dp[x-1];
    }
    else
    {

        if(dp[x]==0)
            return dp[x]=15*calc(x-1);
        else
            return dp[x];
    }
}
int main()
{
    int test,num,i,j,k;
    dp[2]=6;
    dp[4]=90;
    cin>>test;
    while(test--)
    {
        cin>>num;
        cout<<calc(num)<<endl;
    }
    return 0;
}
