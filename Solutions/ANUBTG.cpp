#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int test,n,i,j,k,l,pay;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int *arr=new int[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        j=n/4;
        l=n%4;
        k=n-1;
        pay=0;
        for(i=0;i<j;i++)
        {
            pay=pay+arr[k];
            pay=pay+arr[k-1];
            k=k-4;
        }
        if(l){
        for(i=0;i<2;i++)
        {
            pay=pay+arr[k];
            if(k==0)
                break;
            k--;
        }
        }
        cout<<pay<<endl;
    }
    return 0;
}
