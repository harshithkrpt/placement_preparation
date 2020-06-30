#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    bool BFS(int, int, int *, int *);
    void printShortestDistance(int, int);
};

Graph::Graph(int v)
{
    this->V = v;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

bool Graph::BFS(int src, int dest, int pred[], int dist[])
{
    queue<int> q;
    bool visited[V] = {false};

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    q.push(src);
    visited[src] = true;
    dist[src] = 0;
    while (!q.empty())
    {
        auto n = q.front();
        q.pop();
        for (auto x : adj[n])
        {
            if (!visited[x])
            {
                visited[x] = true;
                dist[x] = dist[n] + 1;
                pred[x] = n;
                q.push(x);

                if (x == dest)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void Graph::printShortestDistance(int src, int dest)
{
    int pred[V], dist[V];

    if (BFS(src, dest, pred, dist) == false)
    {
        cout << "Given source and destination"
             << " are not connected";
        return;
    }

    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1)
    {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    cout << "Shortest path length is : "
         << dist[dest];

    cout << "\nPath is::\n";
    for (int i = path.size() - 1; i >= 0; i--)
        cout << path[i] << " ";
}

int main()
{
    int v = 8;
    Graph g{v};
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
    g.addEdge(3, 7);
    g.addEdge(4, 5);
    g.addEdge(4, 6);
    g.addEdge(4, 7);
    g.addEdge(5, 6);
    g.addEdge(6, 7);

    int src = 0;
    int dest = 7;
    g.printShortestDistance(src, dest);
    return 0;
}