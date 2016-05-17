#include <iostream>
#include <vector>

using namespace std;

vector< vector <int> >mat;

int main()
{
    int h,w,k,i,j,cell,pixX,pixY;
    cin>>h>>w>>k;
    mat.resize(h, vector<int>(w));
    for(i=1;i<=k;i++)
    {
        cin>>cell;
        for(j=1;j<=cell;j++)
        {
            cin>>pixX>>pixY;
            if(i==1){if(mat[pixX-1][pixY-1]==0)
                mat[pixX-1][pixY-1]=i;}
        }
    }
    for(pixX=0;pixX<h;pixX++)
    {
        for(pixY=0;pixY<w;pixY++)
            cout<<mat[pixX][pixY]<<" ";
        cout<<"\b\n";
    }
    return 0;
}
