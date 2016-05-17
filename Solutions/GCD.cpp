#include <iostream>
using namespace std;

int main()
{
    int a,b,c,rem;
    cin>>a>>b;
    while(b)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a<<endl;
    return 0;

}
