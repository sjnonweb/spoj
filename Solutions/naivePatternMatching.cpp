#include <iostream>
#include <cstring>

using namespace std;
void search(char *pat, char *text)
{
    int i,j;
    int m=strlen(pat);
    int n=strlen(text);
    for(i=0;i<n-m+1;i++)
    {
        for(j=0;j<m;j++)
        {
            if(pat[j]!=text[i+j])
                break;
        }
        if(j==m)
        {
            cout<<"Pattern found at: "<<i<<endl;
        }
    }
}



int main()
{
    int n,m;
    cout<<"Enter length of TEXT: ";
    cin>>n;
    cout<<"Enter text: ";
    char text[n];
    cin>>text;
    cout<<"Enter length of PATTERN: ";
    cin>>m;
    char pat[m];
    cout<<"Enter pattern: ";
    cin>>pat;
    search(pat,text);
    return 0;
}
