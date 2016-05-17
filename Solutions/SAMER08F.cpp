#include <iostream>

using namespace std;

int sqr(int n)
{
    if(n==1)
        return 1;
    else
        return (n*n+sqr(n-1));
}
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        cout<<sqr(n)<<endl;
        cin>>n;
    }
    return 0;
}
