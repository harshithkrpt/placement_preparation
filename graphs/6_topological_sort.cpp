#include <bits/stdc++.h>

using namespace std;

// O(V+E) tc
// O(V) sc

class Graph
{
    int V;
    list<int> *adj;
    void topologicalSortUtil(int v, bool visited[], stack<int> &st);

public:
    Graph(int V);
    void addEdge(int v, int w);

    void topologicalSort();
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

void Graph::topologicalSortUtil(int node, bool visited[], stack<int> &stack)
{
    visited[node] = true;

    for (auto x : adj[node])
    {
        if (!visited[x])
        {
            topologicalSortUtil(x, visited, stack);
        }
    }

    stack.push(node);
}

void Graph::topologicalSort()
{
    stack<int> st;
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
        if (!visited[i])
            topologicalSortUtil(i, visited, st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "Following is a Topological Sort of the given graph \n";
    g.topologicalSort();
    return 0;
}