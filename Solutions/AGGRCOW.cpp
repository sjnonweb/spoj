#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];
int n,c;

bool fun(int);
int binarySearch();

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<binarySearch()<<endl;
    }
    return 0;
}
int binarySearch()
{
    int low=0,high=arr[n-1],mid;
    while(low<high)
    {
        mid=(low+high)/2;
        if(fun(mid)==true)
            low=mid+1;
        else
            high=mid;
    }
    return low-1;
}
bool fun(int x)
{
    int placed=1, last=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-last>=x)
        {
            if(++placed==c)
                return true;
            last=arr[i];
        }
        return false;
    }
}
