#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    if(num%10==0)
        cout<<2<<endl;
    else
    {
        cout<<1<<endl;
        cout<<(num%10)<<endl;
    }
    return 0;
}
