#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    while(a!=0||b!=0||c!=0)
    {
        d=b-a;
        if(d==(c-b))
        {
            cout<<"AP "<<(c+d)<<endl;
        }
        else
        {
            d=b/a;
            cout<<"GP "<<(c*d)<<endl;
        }
        cin>>a>>b>>c;
    }
    return 0;
}
