#include <iostream>
#include <cstdio>
using namespace std;

long int gcd(long int a,long int b )
{
    long int rem;
      while(b!=0){
            rem = a%b;
            a = b;
            b = rem;
        }
	return a;
}
int main()
{
    long int i,t,n,q,l,r,result;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&n,&q);

        long int* arr=new long int[n];
        long int* pre=new long int[n];
        long int* suf=new long int[n];

        for(i=0;i<n;i++)
        {
            scanf("%ld",&arr[i]);
        }
        pre[0]=arr[0];
        suf[n-1]=arr[n-1];
        for(i=1;i<n;i++)
        {
            pre[i]=gcd(pre[i-1],arr[i]);
        }
        for(i=n-2;i>=0;i--)
        {
            suf[i]=gcd(suf[i+1],arr[i]);
        }
        while(q--)
        {
            scanf("%ld %ld",&l,&r);
            l--;
            r--;
            if(l==0)
                result=suf[r+1];
            else if(r==n-1)
                    result=pre[l-1];
            else
                result=gcd(pre[l-1],suf[r+1]);
            printf("%ld\n",result);
            //cout<<result<<endl;
        }
        delete arr;
        delete pre;
        delete suf;
    }
    return 0;
}
