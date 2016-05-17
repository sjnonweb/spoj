#include <iostream>
#include <string>
#include <cstring>

using namespace std;

//int cnt,cnt2;
void change(char &x,long long &cntt)
{
    if(x=='+'){
        x='-';
        cntt++;
        }
    else{
        x='+';
        cntt++;
        }
}

int main()
{
    long long test,len,i,j,k,k2,cnt,cnt2;
    //string input;
    string input,inp2,inp3;
    cin>>test;
    while(test--)
    {
        cin>>input;
        inp2=input;
        inp3=input;
        len=input.length();
        //len=strlen(input);
        cnt=0;
        cnt2=0;
        if(len==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else if(len==2)
        {
            if(input[0]!=input[1])
                cout<<"0"<<endl;
            else
                cout<<"1"<<endl;
            continue;
        }
        else
        {
            for(i=1;i<len-1;i++)
            {
                if(inp2[i-1]!=inp2[i] && inp2[i+1]!=inp2[i])
                    continue;
                else if(inp2[i-1]==inp2[i]&&inp2[i+1]!=inp2[i])
                    change(inp2[i-1],cnt);
                else if(inp2[i+1]==inp2[i]&&inp2[i-1]!=inp2[i])
                    change(inp2[i+1],cnt);
                else if(inp2[i+1]==inp2[i]&&inp2[i]==inp2[i-1])
                    change(inp2[i],cnt);
            }
            for(i=len-2;i>0;i--)
            {
                if(inp3[i-1]!=inp3[i] && inp3[i+1]!=inp3[i])
                    continue;
                else if(inp3[i-1]==inp3[i]&&inp3[i+1]!=inp3[i])
                    change(inp3[i-1],cnt2);
                else if(inp3[i+1]==inp3[i]&&inp3[i-1]!=inp3[i])
                    change(inp3[i+1],cnt2);
                else if(inp3[i+1]==inp3[i]&&inp3[i]==inp3[i-1])
                    change(inp3[i],cnt2);
            }
            if(cnt<=cnt2){
                cout<<cnt<<endl;
                //cout<<inp2<<endl;
            }
            else{
                cout<<cnt2<<endl;
                //cout<<inp3<<endl;
            }
            //cout<<input<<endl;
        }

    }
    return 0;
}
