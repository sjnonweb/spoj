#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int test,num,out,j,k;
    scanf("%lld",&test);
    out=0;
    while(test--)
    {
        scanf("%d",&num);
        out=out^num;
    }
    cout<<out<<endl;
    return 0;
}
