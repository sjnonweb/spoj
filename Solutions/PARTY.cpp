#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int budget, parties;
    cin>>budget>>parties;
    while(budget>0)
    {
        int fun[parties],cost[parties];
        for(int i=0;i<parties;i++)
        {
            cin>>cost[i]>>fun[i];
        }
        int dp[parties+1][budget+1];
        for(int i=0;i<=parties;i++)
        {
            for(int w=0;w<=budget;w++)
            {
                if(i==0 || w==0)
                    dp[i][w]=0;
                else if(cost[i-1]<=w)
                    dp[i][w]=max(fun[i-1]+dp[i-1][w-cost[i-1]],dp[i-1][w]);
                else
                    dp[i][w]=dp[i-1][w];
            }
        }
        int j=budget;
        do
        {
            if(dp[parties][j-1]==dp[parties][j])
                j--;
            else
            {
                cout<<j<<" "<<dp[parties][j]<<endl;
                break;
            }
        }while(1);
        cin>>budget>>parties;
    }
    return 0;
}
