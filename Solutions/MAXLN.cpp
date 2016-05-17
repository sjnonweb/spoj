#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double r;
    long long i,test;
    double ans;
    cin>>test;
    i=1;
    while(test--)
    {
        cin>>r;
        ans=(4*r*r)+(0.25);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ans<<endl;
        i++;
    }
}
