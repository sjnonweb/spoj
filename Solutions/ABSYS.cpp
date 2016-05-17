#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int test,num1,num2,num3,i;
    char str1[100],str2[100],str3[100],op1[2],op2[2];
    cin>>test;
    while(test--)
    {
        cin>>str1>>op1>>str2>>op2>>str3;
        if(strchr(str1,'m')!=NULL)
        {
            num2=atoi(str2);
            num3=atoi(str3);
            num1=num3-num2;
        }
        else if(strchr(str2,'m')!=NULL)
        {
            num1=atoi(str1);
            num3=atoi(str3);
            num2=num3-num1;
        }
        else
        {
            num1=atoi(str1);
            num2=atoi(str2);
            num3=num1+num2;
        }
        cout<<num1<<" + "<<num2<<" = "<<num3<<endl;
    }
    return 0;
}
