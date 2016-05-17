#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int test,n,i,j,k,freq;
    cin>>test;
    while(test--)
    {
        cin>>n;
        //int *arr=new int[n];
        int *temp=new int[n];
        int *freqArr=new int[n];
        for(i=0;i<n;i++)
        {
            cin>>temp[i];
            //temp[i]=arr[i];
        }
        sort(temp,temp+n);
        freq=1;
        for(i=0,j=0;i<n;i++)
        {
            if(temp[i+1]==temp[i])
            {
                freq++;
            }
            else
            {
                freqArr[j]=freq;
                j++;
                freq=1;
            }
        }
        /*for(i=0;i<j;i++)
            cout<<freqArr[i]<<" ";*/
        sort(freqArr,freqArr+j);
        cout<<n-freqArr[j-1]<<endl;
    }
    return 0;
}
