#include <iostream>
#include <cstring>
//#include <cstdio>

using namespace std;

int main()
{
    char input[200];
    int i,j,coloumn,row,length,id,index;
    cin>>coloumn;
    while(coloumn)
    {
        cin>>input;
        length=strlen(input);
        row=length/coloumn;
        char mat[row][coloumn];
        //char* mat = new char[row][coloumn];
        id=0;index=0;
        for(i=0;i<row;i++)
        {
            if(id==0)
            {
                for(j=0;j<coloumn;j++)
                {
                    mat[i][j]=input[index];
                    index++;
                }
                id=1;
            }
            else
            {
                for(j=coloumn-1;j>=0;j--)
                {
                    mat[i][j]=input[index];
                    index++;
                }
                id=0;
            }
        }
        for(j=0;j<coloumn;j++)
        {
            for(i=0;i<row;i++)
            {
                cout<<mat[i][j];
            }
        }
        cout<<endl;
        //delete mat;
        cin>>coloumn;
    }
    return 0;

}
