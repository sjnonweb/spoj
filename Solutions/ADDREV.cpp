#include <iostream>
#include <cstdio>

using namespace std;

long int rev(long int num)
{
    long int reverseNum;
    reverseNum=0;
    while(num!=0)
    {
        reverseNum*=10;
        reverseNum+=num%10;
        num=num/10;
    }
    return reverseNum;

}
int main()
{
    long int num1,num2,num,t;
    cin>>t;
    while(t--)
    {
        scanf("%ld %ld",&num1,&num2);
        num=rev(num1)+rev(num2);
        printf("%ld\n",rev(num));
    }
    return 0;

}
