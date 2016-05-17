#include <iostream>
#include <list>
//#include <limits.h>

using namespace std;

class graph
{
    int v;
    list<int> *adj;
    bool isCyclicUtil(int v,bool visited[],int parent);
public:
    void addEdge(int u, int v);
    bool isCyclic();
    graph(int v);
};
//bool graph::isCyclicUtil(int u,bool visited[],int parent);
graph::graph(int v)
{
    this->v=v;
    adj=new list<int>[v];
}
void graph::addEdge(int u, int v)
{
    adj[u-1].push_back(v-1);
    adj[v-1].push_back(u-1);
}

bool graph::isCyclicUtil(int u,bool visited[],int parent)
{
    visited[u]=true;
    list<int>::iterator i;
    for(i=adj[u].begin();i!=adj[u].end();i++)
    {
        if(!visited[*i])
        {
            if(isCyclicUtil(*i,visited,u))
                return true;
        }
        else if(*i!=parent)
            return true;
    }
    return false;
}

bool graph::isCyclic()
{
    bool *visited=new bool[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    for(int u=0;u<v;u++)
    {
        if(!visited[u])
        {
            if(isCyclicUtil(u,visited,-1))
                return true;
        }
    }
    return false;
}



int main()
{
    int e,v,x,y;
    cin>>v>>e;
    graph obj(v);
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        obj.addEdge(x,y);
    }
    if(obj.isCyclic())
        cout<<"Cyclic graph\n";
    else
        cout<<"Not Cyclic\n";
    return 0;
}
