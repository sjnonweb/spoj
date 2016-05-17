#include <iostream>

using namespace std;
int fib_arr[100]={0,1};
int fib(int n)
{

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(fib_arr[n]!=0)
        return fib_arr[n];
    return fib_arr[n]=fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    again:
    cin>>n;
    cout<<fib(n)<<endl;
    char c;
    cout<<"More? ";
    cin>>c;
    if(c=='y')
        goto again;
    return 0;
}
