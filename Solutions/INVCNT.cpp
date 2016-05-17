#include <iostream>
#include <algorithm>
#include <cstdio>

#define LL long long int
using namespace std;

LL count_inv(LL *arr, LL *temp, LL p, LL q);
LL merge(LL *arr, LL *temp, LL p, LL mid, LL q);

LL count_inv(LL *arr, LL *temp, LL p, LL q)
{
    LL inv=0;
    if(p<q)
    {
        LL mid=(p+q)/2;
        inv=count_inv(arr,temp,p,mid);
        inv+=count_inv(arr,temp,mid+1,q);
        inv+=merge(arr,temp,p,mid+1,q);
    }
    return inv;
}
LL merge(LL *arr, LL *temp, LL p, LL mid, LL q)
{
    LL i,j,k,inv=0;
    i=p;j=mid;k=p;
    while(i<mid && j<=q)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            inv=inv+(mid-i);
            temp[k++]=arr[j++];
        }
    }
    while(i<mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=q)
    {
        temp[k++]=arr[j++];
    }
    for(i=p;i<=q;i++)
    {
        arr[i]=temp[i];
    }
    return inv;
}
int main()
{
    LL test,num,i,j,k,count;
    scanf("%lld",&test);
    while(test--)
    {
        cin>>num;
        LL *arr=new LL[num];
        LL *temp=new LL[num];
        for(i=0;i<num;i++)
            scanf("%lld",&arr[i]);
        count=count_inv(arr,temp,0,num-1);
        printf("%lld\n",count);
        delete arr;
        delete temp;
    }
    return 0;
}
