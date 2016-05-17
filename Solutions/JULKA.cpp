#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y;
    int i=10;
    while(i--)
    {
        cin>>a>>b;
        x=(a+b)/2;
        y=a-x;
        cout<<x<<endl<<y<<endl;
    }
    return 0;
}
