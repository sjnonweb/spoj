#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,i,j,k;
    cin>>x>>y;
    while(x>=0)
    {
        if(x==0&&y==0)
            cout<<0<<endl;
        else if(x==y)
            cout<<1<<endl;
        else
        {
            i=(x+y)/(min(x,y)+1);
            cout<<i<<endl;
        }
        cin>>x>>y;
    }
    return 0;
}
