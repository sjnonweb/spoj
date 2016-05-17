#include <iostream>

using namespace std;

float hang_arr[300];

int main()
{
    float a,b,c;
    for(float i=1;i<300;i++)
    {
        hang_arr[(int)i]=(1/(i+1));
    }
    /*for(int i=1;i<10;i++)
        cout<<hang_arr[i]<<" ";*/

    cin>>a;
    float sum=0.00;
    while(a)
    {
        for(int i=1;;i++)
        {
            sum=sum+hang_arr[i];
            if(sum>=a)
            {
                cout<<i<<" card(s)"<<endl;
                break;
            }
        }
        sum=0;
        cin>>a;
    }
    return 0;
}
