#include <iostream>
#include <string>
#include <map>

// Evaluate for "226210", other than that the code is self explanatory
using namespace std;

map<int, long long>dp;

int main()
{
    string input;
    int i,strLength;
    cin>>input;

    while(input[0]!='0')
    {
        strLength=input.length();
        dp[0]=1;
        dp[1]=1;
        for(i=1;i<strLength;i++)
        {
            if(input[i]!='0')
            {
                if(input[i-1]!='0'&&(input[i-1]-48)*10+(input[i]-48)<=26)
                {
                    dp[i+1]=dp[i]+dp[i-1];
                }
                else
                    dp[i+1]=dp[i];
            }
            else
                dp[i+1]=dp[i-1];
        }
        cout<<dp[i]<<endl;
        cin>>input;
    }
    return 0;
}
