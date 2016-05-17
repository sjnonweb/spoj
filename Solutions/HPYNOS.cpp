#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num,temp,i,j,k,count;

    scanf("%d",&num);

    count=0;
    if(num==1)
    {
        cout<<"0"<<endl;
    }
    else{
    while(1)
    {
        temp=0;
        count++;
        while(num)
        {
            j=num%10;
            num=num/10;
            temp=temp+(j*j);
        }
        if(temp==1)
        {
            cout<<count<<endl;
            break;
        }
        else if(temp==4||temp==16||temp==37||temp==58||temp==89||temp==145||temp==42||temp==20)
        {
            cout<<"-1"<<endl;
            break;
        }
        else
            num=temp;
    }
    }
    return 0;
}
