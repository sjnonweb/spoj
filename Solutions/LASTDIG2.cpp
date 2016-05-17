#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int test,a,b,i,j,unit,rem,cycle[4];
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        a=a%10;
        if(a==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        cycle[0]=0; i=0; j=1;
        do
        {
            unit=(int)pow((double)a,j)%10;
            if(cycle[0]==unit)
                break;
            cycle[i]=unit;
            i++;
            j++;
        }while(1);
        rem=b%i;
        if(rem==0)
            cout<<cycle[i-1]<<endl;
        else
            cout<<cycle[rem-1]<<endl;
    }
    return 0;
}
