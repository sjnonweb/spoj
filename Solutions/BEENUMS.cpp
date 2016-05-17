#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num,i,j,k;
    cin>>num;
    while(num>0)
    {
        if(num==1)
            cout<<"Y"<<endl;
        else
        {
            for(i=6;num>1;i+=6)
            {
                num=num-i;
            }
            if(num==1)
                cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;
        }
        cin>>num;
    }
    return 0;
}
