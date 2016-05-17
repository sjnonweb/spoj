#include <iostream>

using namespace std;

int main()
{
    int n,i,sum,count,equal;
    cin>>n;
    while(n>0)
    {
        sum=0;count=0;
        int candy[n];
        for(i=0;i<n;i++)
        {
            cin>>candy[i];
            sum=sum+candy[i];
        }
        if(sum%n==0)
        {
            equal=sum/n;
            for(i=0;i<n;i++)
            {
                if(candy[i]>equal)
                {
                    count=count+(candy[i]-equal);
                }
            }
            cout<<count<<endl;
        }
        else
            cout<<"-1"<<endl;
        cin>>n;
    }
    return 0;
}
