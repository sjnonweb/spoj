#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int test,NG,NM,i,j;
    cin>>test;
    while(test--)
    {
        cin>>NG>>NM;
        int *arrNG=new int[NG];
        int *arrNM=new int[NM];
        for(i=0;i<NG;i++)
            cin>>arrNG[i];
        for(j=0;j<NM;j++)
            cin>>arrNM[j];
        sort(arrNG,arrNG+NG);
        sort(arrNM,arrNM+NM);
        i=0;j=0;
        while(1)
        {
            if(arrNM[j]<=arrNG[i])
            {
                if(j==NM-1)
                {
                    cout<<"Godzilla"<<endl;
                    break;
                }
                j++;
            }
            else
            {
                if(i==NG-1)
                {
                    cout<<"MechaGodzilla"<<endl;
                    break;
                }
                i++;
            }
        }
        delete arrNG;
        delete arrNM;
    }
    return 0;
}
