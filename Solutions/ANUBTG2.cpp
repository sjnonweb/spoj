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
        reverse(arr,arr+n);
        pay=0;
        for(i=0;i<n;i++)
        {
            if(i%4<2)
                pay=pay+arr[i];
        }
        cout<<pay<<endl;
        delete arr;
    }
    return 0;
}
