#include <iostream>
#include <cstdio>

using namespace std;

bool primality_check(long long int num)
{
    if(num<=3)
    {
        return num>1;
    }
    else if(num%2==0||num%3==0)
    {
        return false;
    }
    else
    {
        for(int i=5;i*i<=num;i=i+6)
        {
            if(num%i==0||num%(i+2)==0)
                return false;
        }
        return true;
    }
}
int main()
{
    long long int num,i,j,k;
    again:
    cin>>num;
    bool check=primality_check(num);
    if(check)
        cout<<"Its Prime\n";
    else
        cout<<"Not Prime\n";
    goto again;
    return 0;
}
