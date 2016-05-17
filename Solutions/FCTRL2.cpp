#include <iostream>

using namespace std;

int main()
{
    int t, x, temp, num, i, m, fact[200000], countDigit, index;
    cin>>t;
    while(t--)
    {
        cin>>num;
        fact[0]=1;
        i=1;
        m=1;
        temp=0;
        while(i<=num)
        {
            index=0;
            while(index<m)
            {
                x=fact[index]*i+temp;
                fact[index]=(x%10);
                temp=x/10;
                index++;
            }
            while(temp>0)
            {
                fact[m]=temp%10;
                temp/=10;
                m++;
            }
            i++;
        }
        cout<<endl;
        for(i=m-1;i>=0;i--)
        {
            cout<<fact[i];
        }
        cout<<endl;
    }
    return 0;
}
