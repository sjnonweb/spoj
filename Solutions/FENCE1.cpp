#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float n,r,ans;
    cin>>n;
    while(n)
    {
        //r=(n/3.14);
        ans=(n*n/(2*M_PI));
        cout<<setprecision(2)<<ans<<endl;
        //printf("%.2f\n",ans);
        cin>>n;
    }
    return 0;
}
