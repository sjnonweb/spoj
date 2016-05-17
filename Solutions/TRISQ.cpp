#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test,num,i;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);
        if(num<4)
        {
            printf("0\n");
            continue;
        }
        i=(num/2)-1;
        //j=(i*(1+i))/2;
        printf("%d\n",(i*(1+i))/2);
    }
    return 0;

}
