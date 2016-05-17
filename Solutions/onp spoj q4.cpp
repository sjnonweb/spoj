#include <iostream>
#include <stack>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int cases;
    char input[401];
    stack <char> s;

    cin>>cases;

    while(cases--)
    {
        cin>>input;
        int len = strlen(input);

        for(int i=0;i<len;i++)
        {
            if(isalpha(input[i]))
                cout<<input[i];
            else if(input[i]==')')
            {
                cout<<s.top();
                s.pop();
            }
            else if(input[i]!='(')
            {
                s.push(input[i]);
            }
        }
        cout<<endl;
    }

    return 0;
}
