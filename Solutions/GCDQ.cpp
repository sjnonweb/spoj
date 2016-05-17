// This implementation is not fully solved, and works only when given input is in ascending order
// Check out GCDQ2

#include <iostream>

using namespace std;

int main()
{
    int test, n, factorIndex, inputArray[1000], i, j, k, gcd, factors[100];
    cin>>test;

    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>inputArray[i];
        }
        k=inputArray[0];
        j=0;
        while(k)
        {
            if(inputArray[0]%k==0)
            {
                factors[j]=k;
                j++;
            }
            k--;
        }
        j=0;

        while(1)
        {
            for(i=0;i<n;i++)
            {
                if(inputArray[i]%factors[j]==0)
                {
                    continue;
                }
                else
                    break;
            }
            if(i==n)
            {
                cout<<factors[j]<<endl;
                break;
            }
            else
                j++;
        }
    }
    return 0;
}
