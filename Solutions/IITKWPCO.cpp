#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test,n,i,j,count;
    long int arr[100];
    bool used[100];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",n);
        //long int* arr=new long int[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",arr[i]);
            used[i]=false;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]*2==arr[j]&&arr[j]==false)
                {
                    count++;
                    arr[j]=true;
                    break;
                }
            }
        }
        cout<<count<<endl;
        //delete arr;
    }
    return 0;
}
