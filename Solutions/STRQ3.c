//#include <iostream>
#include <stdio.h>
#include <string.h>

//using namespace std;

int main()
{
    char input[1000001],chLeft,chRight;
    int query,left,right,i,j,k,len,cnt;
    gets(input);
    //string input="checfcheff";
    //len=input.length();
    len=strlen(input);
    int *pref[6];
    int *suff[6];
    //pref[0]=new int[len];
    pref[0]=(int*)(malloc(len*sizeof(int)));
    pref[5]=(int*)(malloc(len*sizeof(int)));
    pref[2]=(int*)(malloc(len*sizeof(int)));
    pref[3]=(int*)(malloc(len*sizeof(int)));
    suff[0]=(int*)(malloc(len*sizeof(int)));
    suff[5]=(int*)(malloc(len*sizeof(int)));
    suff[2]=(int*)(malloc(len*sizeof(int)));
    suff[3]=(int*)(malloc(len*sizeof(int)));
    for(i=0,cnt=0;i<len;i++)
    {
        if(input[i]=='c')
            pref[0][i]=++cnt;
        else
            pref[0][i]=cnt;
    }
    for(i=0,cnt=0;i<len;i++)
    {
        if(input[i]=='h')
            pref[5][i]=++cnt;
        else
            pref[5][i]=cnt;
    }
    for(i=0,cnt=0;i<len;i++)
    {
        if(input[i]=='e')
            pref[2][i]=++cnt;
        else
            pref[2][i]=cnt;
    }
    for(i=0,cnt=0;i<len;i++)
    {
        if(input[i]=='f')
            pref[3][i]=++cnt;
        else
            pref[3][i]=cnt;
    }
    for(i=len-1,cnt=0;i>=0;i--)
    {
        if(input[i]=='c')
            suff[0][i]=++cnt;
        else
            suff[0][i]=cnt;
    }
    for(i=len-1,cnt=0;i>=0;i--)
    {
        if(input[i]=='h')
            suff[5][i]=++cnt;
        else
            suff[5][i]=cnt;
    }
    for(i=len-1,cnt=0;i>=0;i--)
    {
        if(input[i]=='e')
            suff[2][i]=++cnt;
        else
            suff[2][i]=cnt;
    }
    for(i=len-1,cnt=0;i>=0;i--)
    {
        if(input[i]=='f')
            suff[3][i]=++cnt;
        else
            suff[3][i]=cnt;
    }
    /*for(i=0;i<len;i++)
    {
        cout<<suff[2][i]<<" ";
    }*/
    scanf("%d",&query);
    while(query--)
    {
        cnt=0;
        getchar();
        chLeft=getc(stdin);
        getchar();
        chRight=getc(stdin);
        scanf("%d%d", &left, &right);
        if(left==1)
        {
            for(i=right-1;i>left-1;i--)
            {
                if(input[i]==chRight)
                    cnt=cnt+pref[chLeft-99][i-1];
            }
        }
        else
        {
            for(i=left-1;i<right-1;i++)
            {
                if(input[i]==chLeft)
                    cnt=cnt+suff[chRight-99][i+1];
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
