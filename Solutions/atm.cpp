#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float y;
    int x;
    cin>>x>>y;
    if(x+0.50>y)
    {
        cout<<fixed<<setprecision(2)<<y;
    }
    else if(x%5==0)
    {
        y=y-x-0.50;
        cout<<fixed<<setprecision(2)<<y;
    }
    else
        cout<<fixed<<setprecision(2)<<y;
    return 0;

}
