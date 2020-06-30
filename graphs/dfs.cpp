#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;

    void DFSUtil(int v, bool vi[]);

public:
    Graph(int V);
    void addEdge(int v, int w);

    void DFS();

    void DFSIter(int);
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

void Graph::DFSUtil(int v, bool vis[])
{
    vis[v] = true;
    cout << v << ' ';
    for (auto i = adj[v].begin(); i != adj[v].end(); i++)
    {
        if (!vis[*i])
            DFSUtil(*i, vis);
    }
}

// Only Connected
// void Graph::DFS(int v)
// {
//     bool *visited = new bool[V];
//     for (int i = 0; i < V; i++)
//     {
//         visited[i] = false;
//     }
//     DFSUtil(v, visited);
// }

// handling for disconnected
void Graph::DFS()
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            DFSUtil(i, visited);
    }
}

// TODO THIS IS WRONG ITER AND ALSO UPDATE THIS IN ALGORITHMS FOLDER
void Graph::DFSIter(int s)
{
    vector<bool> vis(V, false);

    stack<int> st;
    st.push(s);
    while (!st.empty())
    {
        auto n = st.top();
        st.pop();
        if (!vis[n])
        {
            vis[n] = true;
            cout << n << ' ';
        }
        for (auto j = adj[n].begin(); j != adj[n].end(); ++j)
        {
            if (!vis[*j])
                st.push(*j);
        }
    }
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    cout << "Following is Depth First Traversal"
            " (starting from vertex 0) \n";
    g.DFS();

    // g.DFSIter(0);

    return 0;
}