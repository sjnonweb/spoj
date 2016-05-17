#include <iostream>
#include <list>
#include <stack>

using namespace std;
int dfs(list<int> *adj,stack<int> &s,bool *visited, int *distance)
{
    int temp,peg,dist=0;
    list<int>::iterator itr;
    distance[s.top()]=0;
    int node;
    while(s.empty()==false)
    {
        temp=s.top();
        s.pop();
        if(distance[temp]>=dist)// This block checks for the farthest node from the starting point of dfs and returns that node
        {
            dist=distance[temp];
            node=temp;
        }
        visited[temp]=true;
        for(itr=adj[temp].begin(); itr!=adj[temp].end(); itr++)
        {
            if(visited[*itr]==false)
            {
                s.push(*itr);
                distance[*itr]=distance[temp]+1;
            }
        }
    }
    return node;
}
int main()
{
    int num,e1,e2,i,j,k,temp,u,v;
    cin>>num;
    list<int> adj[num];
    stack<int> s;
    bool visited[num];
    int distance[num];
    for(i=0;i<num;i++)
    {
        visited[i]=false;
        distance[i]=-1;
    }
    for(i=0;i<num-1;i++)
    {
        cin>>e1>>e2;
        adj[e1-1].push_back(e2-1);
        adj[e2-1].push_back(e1-1);
    }
    s.push(0);
    u=dfs(adj,s,visited,distance);
    while(!s.empty())
        s.pop();
    s.push(u);
    for(i=0;i<num;i++)
    {
        visited[i]=false;
        distance[i]=-1;
    }
    v=dfs(adj,s,visited,distance);
    cout<<distance[v]<<endl;
    return 0;
}
