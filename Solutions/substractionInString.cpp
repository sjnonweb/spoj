#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int sub,len,i,j,k,carry,temp;
    cin>>input>>sub;
    len=input.length();
    carry=0;
    for(i=len-1;i>=0;i--)
    {
        if(input[i]<(sub+'0'))
        {
            temp=((input[i])+10)-(sub+48);
            input[i]=(char)(temp+48);
            carry=1;
            sub=carry;
        }
        else
        {
            temp=(input[i])-(sub+48);
            input[i]=(char)(temp+48);
            carry=0;
            sub=0;
        }
    }
    for(i=0;i<input.length();i++)
    {
        if(input[i]!='0')
        {
            while(i<input.length())
            {
                cout<<input[i];
                i++;
            }
            break;
        }
    }
    cout<<endl;
    return 0;
}
