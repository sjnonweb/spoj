#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,i,j,unit,power,cycle[4];
    cin>>a;
    a=a%10;
    cycle[0]=0; i=0; j=1;
    do
    {
        //unit=((a^j)%10)
        power=(int)pow((double)a,j);// The function pow's default return type is 'double', so we need to typecast it to 'int', in addition to typecasting the base as well.
        unit=power%10;
        if(cycle[0]==unit)
            break;
        cycle[i]=unit;
        i++;
        j++;
    }while(1);
    for(j=0;j<i;j++)
        cout<<cycle[j]<<endl;
    return 0;
}
