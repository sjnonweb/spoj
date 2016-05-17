#include <iostream>
#include <cstring>

using namespace std;

void computePrefix(char *pattern,int *lps);
void kmpSearch(char *pattern, char *text)
{
    int m=strlen(pattern);
    int n=strlen(text);
    int *lps=NULL;
    lps=new int[m];
    computePrefix(pattern,lps);
    int i=0; // Index for text
    int j=0; // Index for pattern
    while(i<n)
    {
        if(pattern[j]==text[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<"Pattern found at index: "<<i-j<<endl;
            j=lps[j-1];
        }
        else if(i<n && pattern[j]!=text[i])
        {
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }
    }
    delete lps;

}
void computePrefix(char *pattern,int *lps)
{
    int m,k,q;
    m=strlen(pattern);
    lps[0]=0;
    k=0; q=1;
    while(q<m)
    {
        if(pattern[k]==pattern[q])
        {
            k++;
            lps[q]=k;
            q++;
        }
        else
        {
            if(k!=0)
                k=lps[k-1];
            else
            {
                lps[q]=0;
                q++;
            }
        }
    }

}

int main()
{
    int n,m;
    cout<<"Enter the length of TEXT, then enter the TEXT itself: ";
    cin>>n;
    char text[n];
    cin>>text;
    cout<<"Enter the length of PATTERN, the enter the PATTERN itself: ";
    cin>>m;
    char pattern[m];
    cin>>pattern;
    kmpSearch(pattern,text);
    return 0;
}
