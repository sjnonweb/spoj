#include <stdio.h>
#define mod 1000007


int main()
{
    long long test,num,i,j,k;
    //cin>>test;
    scanf("%lld",&test);
    while(test--)
    {
        //cin>>num;
        scanf("%lld",&num);
        i=num*(num+1);
        i=i%mod;
        j=((num-1)*(num))/2;
        j=j%mod;
        //cout<<(i+j)%mod<<endl;
        printf("%lld\n",(i+j)%mod);
    }

    return 0;
}
