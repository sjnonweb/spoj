#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input,temp1,temp2,temp3;
    int len,i,j,k;
    while(cin>>input)
    {
        len=input.length();
        i=0;
        while(i<len)
        {
            if(input[i]>96 && input[i]<123)
            {

            }
            else
            {
                cout<<"Error!";
                break;
            }
        }
    }
    return 0;
}
