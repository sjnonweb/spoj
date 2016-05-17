//#include <iostream>
#include <stdio.h>
#include <string.h>

//using namespace std;

int main()
{
    char input[1000001],chLeft,chRight;
    int query,left,right,i,j,k;
    //scanf("%s",&input);
    gets(input);
    scanf("%d",&query);
    while(query--)
    {
        j=0;
        getchar();
        chLeft=getc(stdin);
        getchar();
        chRight=getc(stdin);
        //cout<<chLeft<<" "<<chRight<<endl;
        //getchar();
        //getchar();chLeft=getchar();chRight=getchar();
        //scanf("%s%s",&chLeft,&chRight);
        scanf("%d%d", &left, &right);
        for(i=(left-1);i<(right-1);i++)
        {
            if(input[i]==chLeft)
            {
                for(k=(i+1);k<right;k++)
                {
                    if(input[k]==chRight)
                        j++;
                }
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
