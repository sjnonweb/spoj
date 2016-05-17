#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int test,n,i,j,ans;
    long int arr[200];
    bool used[200];
    scanf("%d",&test);
    //cin>>test;
    while(test--)
    {
        scanf("%d",&n);
        //cin>>n;
        //long int* arr=new long int[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&arr[i]);
            //cin>>arr[i];
            used[i]=false;
        }
        sort(arr,arr+n);
        ans=0;
        for(i=0;i<n;i++)
        {
            if(used[i]==true)
                continue;
            j=i+1;
            while(j<n)
            {
                if(arr[i]*2==arr[j]&&used[j]==false)
                {
                    ans++;
                    used[j]=true;
                    break;
                }
                j++;
            }
        }
        //cout<<ans<<endl;
        printf("%d\n",ans);
        //delete arr;
    }
    return 0;
}
