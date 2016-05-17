#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
long long test,b,i,j,unit,rem,cycle[4];
char a[2000];
cin>>test;
while(test--)
{
    cin>>a>>b;
    int temp=(a[(strlen(a))-1]-48);
    if(temp==0)
    {
        cout<<"0"<<endl;
        continue;
    }
    if(b==0){cout<<"1"<<endl;continue;}
    cycle[0]=0; i=0; j=1;
    do
    {
        unit=(int)pow((double)temp,j++)%10;
        if(cycle[0]==unit)
            break;
        cycle[i++]=unit;
    }while(1);
    rem=b%i;
    if(rem==0)
        cout<<cycle[i-1]<<endl;
    else
        cout<<cycle[rem-1]<<endl;
}
return 0;
}
