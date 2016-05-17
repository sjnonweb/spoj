#include <iostream>

using namespace std;

int main()
{
    long long int num1,num2,num3,result,i,j,k,test;
    char opr[2];
    cin>>test;
    while(test--)
    {
        cin>>num1>>opr>>num2;
        if(opr[0]=='+')
            result=num1+num2;
        else if(opr[0]=='-')
            result=num1-num2;
        else if(opr[0]=='*')
            result=num1*num2;
        else if(opr[0]=='/')
            result=num1/num2;
        cin>>opr;
        while(opr[0]!='=')
        {
            cin>>num2;
            if(opr[0]=='+')
                result=result+num2;
            else if(opr[0]=='-')
                result=result-num2;
            else if(opr[0]=='*')
                result=result*num2;
            else if(opr[0]=='/')
                result=result/num2;
            cin>>opr;
        }
        cout<<result<<endl;
    }
    return 0;
}
