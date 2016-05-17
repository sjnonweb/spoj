#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    int ambiguity;
    int n,i,j,k;
    cin>>n;
    while(n)
    {
        int *arr=new int[n];
        //int *arr2=new int[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            //arr2[i]=i+1;
        }
        for(i=0;i<n;i++)
        {
            //cout<<i+1<<arr[arr[i]-1]<<endl;
            if((i+1)!=arr[(arr[i]-1)])
            {
                ambiguity=0;
                break;
            }
            ambiguity=1;
        }
        //cout<<ambiguity<<endl;
        if(ambiguity==0)
            cout<<"not ambiguous\n";
        else
            cout<<"ambiguous\n";
        delete arr;
        //delete arr2;
        cin>>n;
    }

    return 0;

}
