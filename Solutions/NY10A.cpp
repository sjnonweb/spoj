#include <iostream>
#include <string>

using namespace std;

void search(string pat, string input)
{
    int m,n,i,j,k,x;
    m=pat.length();
    n=input.length();
    k=0;
    for(i=0;i<n-m+1;i++)
    {
        x=i;
        for(j=0;j<m;j++)
        {
            if(pat[j]!=input[x++])
                break;
        }
        if(j==m)
            k++;
    }
    cout<<k<<" ";
}
int main()
{
    int test,i,j,k;
    string cmp[8],input;
    cmp[0]="TTT";
    cmp[1]="TTH";
    cmp[2]="THT";
    cmp[3]="THH";
    cmp[4]="HTT";
    cmp[5]="HTH";
    cmp[6]="HHT";
    cmp[7]="HHH";
    cin>>test;
    while(test--)
    {
        cin>>k;
        cin>>input;
        //cout<<input<<endl;
        cout<<k<<" ";
        for(i=0;i<8;i++)
            search(cmp[i],input);
        cout<<"\n";
    }
    return 0;
}
