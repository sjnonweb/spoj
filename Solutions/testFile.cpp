#include <iostream>
using namespace std;

int main()
{
    int test,n,i,j,k;
    cin>>test;
    while(test--)
    {
    	cin>>n;
    	for(i=1;i<=n;i++)
    	{
    		if(i%3==0 && i%5!=0)
    			cout<<"Fizz"<<endl;
    		else if(i%3!=0 && i%5==0)
    			cout<<"Buzz"<<endl;
    		else if(i%3==0 && i%5==0)
    			cout<<"FizzBuzz"<<endl;
    		else
    			cout<<i<<endl;
    	}
    }
    return 0;
}
