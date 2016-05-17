#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input,output;
    int len,i,j,carry,temp,mult=2;
    while(cin>>input)
    {
    len=input.length();
    if(len==1)
    {
        if(input[0]=='1')
        {
            cout<<1<<endl;
            continue;
        }
    }
    //cout<<input<<mult<<len;
    carry=0;
    for(i=len-1;i>=0;i--)
    {
        temp=(carry+((input[i]-48)*mult));
        input[i]=(temp%10)+48;
        carry=temp/10;
    }
    while(carry!=0)
    {
        input=(char)((carry%10)+48)+input;
        carry=carry/10;
    }
    //cout<<input<<endl;


    int sub=2;
    len=input.length();
    carry=0;
    for(i=len-1;i>=0;i--)
    {
        if(input[i]<(sub+'0'))
        {
            temp=((input[i])+10)-(sub+48);
            input[i]=(char)(temp+48);
            //carry=1;
            sub=1;
        }
        else
        {
            temp=(input[i])-(sub+48);
            input[i]=(char)(temp+48);
            //carry=0;
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

    }
    return 0;
}
