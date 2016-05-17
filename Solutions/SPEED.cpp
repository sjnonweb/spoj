#include <iostream>

using namespace std;
long int gcd(long int a, long int b)
{
    long int rem;
    while(b)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    long int test, a, b,answer;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(a>b)
            answer=a-b;
        else
            answer=b-a;
        if(a<0)
            a=a*(-1);
        if(b<0)
            b=b*(-1);
        cout<<(answer/gcd(a,b))<<endl;

    }
    return 0;
}
