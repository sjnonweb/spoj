#include <iostream>

using namespace std;

int main()
{
    int num,temp,count,i,j,k;
    bool arr[1000];
    for(i=0;i<1000;i++)
        arr[i]=false;
    cin>>num;
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
        //cout<<temp<<endl;
        if(temp==1)
        {
            cout<<count<<endl;
            break;
        }
        else if(arr[temp]==true)
        {
            cout<<"-1"<<endl;
            break;
        }
        else{
            arr[temp]=true;
            num=temp;
        }
    }
    }
    return 0;
}
