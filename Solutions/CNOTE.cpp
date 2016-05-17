#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x,y,k,n,test,*pages,*cost,i,j;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d %d",&x,&y,&k,&n);
        pages=NULL;
        cost=NULL;
        pages=new int[n];
        cost=new int[n];
        for(i=0;i<n;i++)
            scanf("%d %d",&pages[i],&cost[i]);
        if(x>=y)
        {
            printf("LuckyChef\n");
            continue;
        }
        else
        {
            int cmp;
            cmp=x-y;
            for(i=0;i<n;i++)
            {
                if(pages[i]>=cmp && k>=cost[i])
                {
                    printf("LuckyChef\n");
                    continue;
                }
            }
            printf("UnluckyChef\n");
        }
    }
    return 0;
}
