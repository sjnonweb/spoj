#include <iostream>
//#include <map>

#define ll long long

using namespace std;

ll fact(ll num)
{
    if(num==1)
        return 1;
    else
        return num*fact(num-1);
}
ll calc(ll num)
{
    ll i,j,k;
    ll sum=0;
    for(i=1;i<=num;i++)
    {
        sum=sum+(i*(fact(i)+num));
    }
    return sum;
}
int main()
{
    ll test,n,m,i,j,k;
    cin>>n>>m;
    ll *arr=new long long[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    ll sum=0;
    for(i=0;i<n;i++)
        sum=sum+calc(arr[i]);
    cout<<sum%m<<endl;
    return 0;

}
