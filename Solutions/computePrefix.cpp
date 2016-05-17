#include <iostream>
#include <cstring>

using namespace std;

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
    int n;
    cout<<"Enter the length of pattern: ";
    cin>>n;
    char pattern[n];
    int lps[n];
    cin>>pattern;
    computePrefix(pattern,lps);
    for(int i=0;i<n;i++)
        cout<<lps[i]<<" ";
    return 0;
}
