#include <iostream>

using namespace std;

int main()
{
    int test,n,p;
    cin>>test;
    while(test--)
    {
        cin>>n>>p;
        if(p==0)
            cout<<"Airborne wins."<<endl;
        else
            cout<<"Pagfloyd wins."<<endl;
    }
    return 0;
}
