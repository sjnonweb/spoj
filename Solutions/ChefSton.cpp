#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    ios::sync_with_stdio(false);

    int numberOfStones;
    unsigned long int timeAvailable, maxProfit, j, k, i;
    unsigned long int timeNeeded[100000], profitDue[100000];

    while(t--)
    {
        cin>>numberOfStones>>timeAvailable;
        maxProfit=0;
        for(i=0;i<numberOfStones;i++)
        {
            cin>>timeNeeded[i];
        }
        for(i=0;i<numberOfStones;i++)
        {
            cin>>profitDue[i];
        }
        for(i=0;i<numberOfStones;i++)
        {
            j=timeAvailable/timeNeeded[i];
            k=j*profitDue[i];
            if(k>maxProfit)
                maxProfit=k;

        }
        cout<<maxProfit<<endl;

    }
}
