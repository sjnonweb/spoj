#include <iostream>
#include <stack>

using namespace std;

//stack <int> s;

int main()
{
    int n,i,j,k;
    cin>>n;
    while(n)
    {
        int arr[n];
        stack <int> s;
        s.push(0);
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0,j=1;i<n;i++)
        {
            if(j==arr[i])
                j++;
            else if(j==s.top())
            {
                j++;
                i--;
                s.pop();
            }
            else
                s.push(arr[i]);
        }

        while(j==s.top())
        {
            j++;
            s.pop();
        }
        if(s.top()==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        cin>>n;
    }
    return 0;
}
