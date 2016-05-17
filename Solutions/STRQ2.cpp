#include <iostream>
#include <stdio.h>
#include <string.h>

#define gc getchar_unlocked

using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void scanchar(char &x)
{
    register char c = gc();
    //x = 0;
    for(;(c<97 || c>122);c = gc());
    //for(;c>96 && c<123;c = gc()) x=c;//{x = (x<<1) + (x<<3) + c - 48;}
    x=c;
}
void scanString(char x[])
{
    register char c = gc();
    //x = 0;
    int i=0;
    for(;(c<97 || c>122);c = gc());
    for(;c>96 && c<123;c = gc())
        x[i++]=c;//{x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
    char input[1000001],chLeft,chRight;
    int query,left,right,i,j,k;
    //scanf("%s",&input);
    //gets(input);
    scanString(input);
    //scanf("%d",&query);
    scanint(query);
    while(query--)
    {
        j=0;
        /*getchar();
        chLeft=getc(stdin);
        getchar();
        chRight=getc(stdin);*/
        scanchar(chLeft);
        scanchar(chRight);
        //cout<<chLeft<<" "<<chRight<<endl;
        //getchar();
        //getchar();chLeft=getchar();chRight=getchar();
        //scanf("%s%s",&chLeft,&chRight);
        //scanf("%d%d", &left, &right);
        scanint(left);
        scanint(right);
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
