#include <iostream>
//#include <iomanip>

using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    long long int x,y,z,no_of_input,countzero;

    cin>>no_of_input;

    while(no_of_input--)
    {
        cin>>z;
        countzero=0;
        for(x=5;x<=z;x=x*5)
        {
           y=z/x;
           countzero+=y;
        }
        cout<<countzero<<endl;
    }
    return 0;
}
