#include <iostream>

using namespace std;

int main()
{
    int base,exp,result;
    cin>>base>>exp;
    result=1;
    while(exp)
    {
        if(exp%2==1)
        {
            exp--;
            result=result*base;
        }
        exp=exp/2;;
        base=base*base;
    }
    cout<<result;
    return 0;
}
