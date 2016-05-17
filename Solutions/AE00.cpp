#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    b=0;
    for(int i=1;i<=((int)sqrt(a));i++)
        b=b+((a/i)-i+1);
    cout<<b<<endl;
    return 0;
}
