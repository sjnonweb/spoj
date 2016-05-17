// For reference look up algorithmist and codegeeksblog.wordpress.com or wiki diagonal argument article

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int test,num,temp,sum,i;
    cin>>test;
    while(test--)
    {
        cin>>num;
        sum=0;
        // Triangular progression series

        for(i=1;;i++)
        {
            sum=sum+i;
            if(sum>=num)
                break;
        }
        int aux=i+1; // i represents the number of elements in that diagonal
                     // and numerator and denominator in each elements sums up to 1 more than i, so aux;

        temp=num-(sum-i); // temp would be numerator or denominator, depending upon the condition
                          // and so other element would be aux-temp


        if(i%2==0)
        {
            cout<<"TERM "<<num<<" IS "<<temp<<"/"<<(aux-temp)<<endl;
            continue;
        }
        else
        {
            cout<<"TERM "<<num<<" IS "<<(aux-temp)<<"/"<<temp<<endl;
            continue;
        }
    }
    return 0;
}
