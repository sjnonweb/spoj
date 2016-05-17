#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int test,row,i,j,coloumn;
    cin>>test;
    while(test--)
    {
        cin>>row>>coloumn;
        int **mat=new int*[row];
        int **dp=new int*[row];
        for(i=0;i<row;i++)
        {
            mat[i]=new int[coloumn];
            dp[i]=new int[coloumn];
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<coloumn;j++)
            {
                cin>>mat[i][j];
            }
        }
        for(i=0;i<coloumn;i++)
            dp[0][i]=mat[0][i];
        for(i=1;i<row;i++)
        {
            dp[i][0]=max(dp[i-1][0]+mat[i][0],dp[i-1][1]+mat[i][0]);
            for(j=1;j<coloumn-1;j++)
            {
                dp[i][j]=max(max(dp[i-1][j-1]+mat[i][j],dp[i-1][j]+mat[i][j]),dp[i-1][j+1]+mat[i][j]);
            }
            dp[i][j]=max(dp[i-1][j-1]+mat[i][j],dp[i-1][j]+mat[i][j]);
        }
        /*for(i=0;i<row;i++)
        {
            for(j=0;j<coloumn;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        sort(dp[row-1],dp[row-1]+coloumn);
        cout<<dp[row-1][coloumn-1]<<endl;
    }
}
