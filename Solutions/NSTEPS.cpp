#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long int x,y,test;
    scanf("%ld",&test);
    while(test--)
    {
        scanf("%ld %ld",&x,&y);
        if(x==y)
        {
            if(x%2==0)
                 printf("%ld\n",x+x);
            else
                printf("%ld\n",(x+x-1));
        }
        else if(x==(y+2))
        {
            if(x%2==0)
            {
                x--;
                printf("%ld\n",x+x);
            }
            else
            {
                x--;
                printf("%ld\n",(x+x-1));
            }
        }
        else
            printf("No Number\n");
    }
    return 0;
}
