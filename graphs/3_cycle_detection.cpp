#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;

    bool isCyclicUtil(int v, bool visited[], bool *rs);

public:
    Graph(int V);
    void addEdge(int v, int w);

    bool isCyclic();
};

Graph::Graph(int v)
{
    this->V = v;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

bool Graph::isCyclicUtil(int v, bool vis[], bool *rs)
{
    if (vis[v] == false)
    {
        vis[v] = true;
        rs[v] = true;

        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if (!vis[*i] && isCyclicUtil(*i, vis, rs))
            {
                return true;
            }
            else if (rs[*i])
            {
                return true;
            }
        }
    }
    rs[v] = false;
    return false;
}

bool Graph::isCyclic()
{
    bool *vis = new bool[V];
    bool *rs = new bool[V];

    for (int i = 0; i < V; i++)
    {
        if (isCyclicUtil(i, vis, rs))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    if (g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";

    return 0;
}