#include <iostream>
#include <new>
#include <algorithm>

using namespace std;

int main()
{
    int test,n,i,j,hotness;
    cin>>test;
    while(test--)
    {
        cin>>n;
        hotness=0;
        int *male=NULL;
        male=new int[n];
        int *female=NULL;
        female=new int[n];
        for(i=0;i<n;i++)
        {
            cin>>male[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>female[i];
        }
        sort(male,male+n);
        sort(female,female+n);
        for(i=0;i<n;i++)
        {
            hotness=hotness+(male[i]*female[i]);
        }
        cout<<hotness<<endl;
        delete male;
        delete female;
    }
    return 0;
}
