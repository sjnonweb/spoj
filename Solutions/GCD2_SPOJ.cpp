#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char b[251];

int func(int a)
{
    int len=strlen(b);
    int rem=0;
    for(int i=0;i<len;i++)
    {
        if(i==0)
            rem=(b[i]-48)%a;
        else
            rem=(rem*10+(b[i]-48))%a;
    }
    return rem;
}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int test;
    int a;
    cin>>test;
    while(test--){
    scanf("%d %s",&a,&b);
    if(a==0)
        printf("%s\n",b);

    else if(b[0]=='0')
        printf("%d\n",a);
    else{
        int rem=func(a);
        printf("%d\n",gcd(a,rem));
    }
    }
    return 0;
}
