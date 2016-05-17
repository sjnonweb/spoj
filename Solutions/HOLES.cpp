#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int cases,count,i;
    char input[100];

    cin>>cases;

    while(cases--)
    {
        cin>>input;
        count=0;

        for(i=0; i<strlen(input); i++)
        {
            if(input[i]=='A'||input[i]=='D'||input[i]=='O'||input[i]=='P'||input[i]=='Q'||input[i]=='R')
                count++;
            else if(input[i]=='B')
                count+=2;
        }
        cout<<count<<endl;
    }
    return 0;
}
