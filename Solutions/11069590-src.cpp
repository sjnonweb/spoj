#include <iostream>
#define LIMIT 100000

using namespace std;

int main()
{
    unsigned long long int i,j,x,y;
    int casen;
    cin>>casen;
    while(casen)
    {
    cin>>x>>y;
    int *primes = new int[y-x+1];
    for(i=0;i<=((y-x)+1);i++)
    {
        primes[i]=0;
    }
    for(i=2;i*i<=y;i++)
    {
        int flag = x/i;
        flag = flag*i;
        for(int j=flag;j<=y;j+=i)
        {
            if(j != i && j >= x)
            primes[j - x] = 1;
        }
    }
    for(int i=0;i<((y-x)+1);++i)
    {
        if(primes[i] == 0 && x+i != 1) // We don't want to print if it's 1
        {
            cout<<x+i<<endl;
        }
    }


    casen--;
    }
    return 0;



}

