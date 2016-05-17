#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int mat[200][200];
void bfs(int,int);
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        vector < pair <int,int> > vc;
        int m,n;
        cin>>m>>n;
        int i,j;
        char ch;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ch;
                if(ch=='1')
                {
                    mat[i][j]=-1;
                    vc.push_back(make_pair(i,j));
                }
                else
                    mat[i][j]=1000;
            }
        }
        for(i=0;i<vc.size();i++)
        {
            bfs(vc[i].first,vc[i].second);
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
void bfs(int i, int j)
{
    int distance;
    mat[i][j]=0;
    queue<int> q;
    q.push(i);
    q.push(j);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int y=q.front();
        q.pop();

        distance=mat[x][y]+1;

        if(y-1>=0 && distance<mat[x][y-1])
        {
            mat[x][y-1]=distance;
            q.push(x);
            q.push(y-1);
        }
        if(y+1>=0 && distance<mat[x][y+1])
        {
            mat[x][y+1]=distance;
            q.push(x);
            q.push(y+1);
        }
        if(x-1>=0 && distance<mat[x-1][y])
        {
            mat[x-1][y]=distance;
            q.push(x-1);
            q.push(y);
        }
        if(x+1>=0 && distance<mat[x+1][y])
        {
            mat[x+1][y]=distance;
            q.push(x+1);
            q.push(y);
        }
    }
}
