#include <iostream>
#include <map>
#include <cmath>

using namespace std;

map<int, long long> dp;

long long int coins(long long int n)
{
    if(n==0)
        return 0;
    if(dp[n]!=0)
        return dp[n];
    long long auxiValue=max(n,coins(n/2)+coins(n/3)+coins(n/4));
    dp[n]=auxiValue;
    return dp[n];
}
int main()
{
    long long int a;
    while((cin>>a))
        cout<<coins(a)<<endl;
    return 0;
}

