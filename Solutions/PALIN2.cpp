#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int t,len,centre,left,right,l,r,i;
    string s;

    cin>>t;

    while(t--)
    {
        char ch=NULL;
        string s;
        cin>>s;
        len=s.size();

        if(len%2)
        {
                centre=len/2;
                left=centre-1;
                right=centre+1;
        }
        else
        {
            centre=len/2;
            left=centre-1;
            right=centre;
        }

        while(left>=0 && s[left]==s[right])
        {
                left--;
                right++;
        }

        if(left<0)
        {
             if(len%2)
             {
                    if(s[centre]!=57)
                     s[centre]++;
                    else
                    {
                        s[centre]=48;
                        l=centre-1;
                        r=centre+1;
                        while(s[l]==57 && s[r]==57 && l>=0)
                        {
                                s[l]=s[r]=48;
                                l--;
                                r++;
                        }
                        if(l<0)
                        {
                            s[0]=49;
                            ch=49;
                        }
                        else
                        {
                            s[l]++;
                            s[r]=s[l];
                        }
                     }
             }
            else
            {

            left=centre-1;                              // if 0 is in the centre, include also that case...
            right=centre;
            while(left>=0)
            {
                if(s[left]!=57)
                 {
                     s[left]++;
                     s[right]=s[left];
                     break;
                 }
                 else
                 {
                    s[left]=s[right]=48;
                    right++;
                    left--;
                 }
            }
            if(left<0)
            {
                s[0]=49;
                ch=49;
            }

         }
        }
        else
        {
                if(s[right] < s[left])
                  while(left>=0)
                  {
                    s[right]=s[left];
                    left--;
                    right++;
                  }
                else
                 {
                    centre=len/2;
                    if(len%2)
                    {
                            left=centre-1;
                            right=centre+1;
                    }
                    else
                    {
                        left=centre-1;
                        right=centre;
                    }
                    if(len%2 && s[centre]!=57)
                    {
                        s[centre]++;
                    }
                  else
                    while(left>=0)
                    {
                            if(s[left]!=57)
                            {
                                s[right]=s[left]=s[left]+1;
                                if(len%2)
                                 s[centre]=48;
                                break;
                            }
                            else
                            {
                                s[left]=s[right]=48;
                                left--;
                                right++;
                            }
                    }
                    while(left>=0)
                    {
                        s[right]=s[left];
                        left--;
                        right++;
                    }




                }

        }
        if(ch)
        cout<<s<<1<<endl;
        else
        cout<<s<<endl;



    }

}
