#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,d,i,j,k;
    cin>>a>>d;
    while(a!=0)
    {
        int *arrA=new int[a];
        int *arrD=new int[d];
        for(i=0;i<a;i++)
            cin>>arrA[i];
        for(i=0;i<d;i++)
            cin>>arrD[i];
        sort(arrA,arrA+a);
        sort(arrD,arrD+d);
        if(arrA[0]>=arrD[1])
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
        delete arrA;
        delete arrD;
        cin>>a>>d;
    }
}
