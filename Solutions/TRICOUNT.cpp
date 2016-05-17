#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int test,n;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        printf("%lld\n",(n*(n+2)*(2*n+1)/8));
    }
    return 0;
}
