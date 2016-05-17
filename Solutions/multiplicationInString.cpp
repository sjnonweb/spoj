#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input,output;
    int len,i,j,carry,temp,mult;
    cin>>input>>mult;
    len=input.length();
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
    cout<<input;
    return 0;

}
