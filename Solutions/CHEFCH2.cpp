#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long test,len,i,j,k,k2,cnt,cnt2;
    string input;
    cin>>test;
    while(test--)
    {
        cin>>input;
        cnt=0;
        cnt2=0;
        len=input.length();
        if(len==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else
        {
            for(i=0;i<len;i=i+2)
            {
                if(input[i]=='+')
                    cnt++;
            }
            for(i=1;i<len;i=i+2)
            {
                if(input[i]=='-')
                    cnt++;
            }
            for(i=0;i<len;i=i+2)
            {
                if(input[i]=='-')
                    cnt2++;
            }
            for(i=1;i<len;i=i+2)
            {
                if(input[i]=='+')
                    cnt2++;
            }
            k=min(cnt,cnt2);
            cout<<k<<endl;
        }
    }
    return 0;
}
