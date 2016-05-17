#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int test,more,people,i,j=1,sum;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&more);
        scanf("%d",&people);
        int *arr=new int[people];
        for(i=0;i<people;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+people);
        sum=0;
        for(i=people-1;i>=0;i--)
        {
            sum=sum+arr[i];
            if(sum>=more)
            {
                printf("Scenario #%d:\n%d\n",j,people-i);
                break;
            }
        }
        if(i<0)
        {
            printf("Scenario #%d:\nimpossible\n",j);
        }
        j++;
        printf("\n");
        delete arr;
    }
    return 0;
}
