#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector< vector<int> > dp;

void fillTable(vector< vector<int> >&dp,string a, string b, int aLen, int bLen)
{
    int i,j,k,diff;
    for(i=0;i<=aLen;i++)
        dp[i][0]=i;
    for(j=0;j<=bLen;j++)
        dp[0][j]=j;
    for(i=1;i<=aLen;i++)
    {
        for(j=1;j<=bLen;j++)
        {
            if(a[i-1]==b[j-1])
                diff=0;
            else
                diff=1;
            dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+diff);
        }
    }
}

int main()
{
    string a,b;
    int test,i,j,k,aLen,bLen;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        aLen=a.length();
        bLen=b.length();
        dp.resize(aLen+1, vector<int>(bLen+1));
        fillTable(dp,a,b,aLen,bLen);
        cout<<dp[aLen][bLen]<<endl;
        dp.clear();
    }
    return 0;
}
