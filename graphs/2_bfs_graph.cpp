#include <bits/stdc++.h>

using namespace std;

void build_adjacent_list(vector<list<int>> &adjacent_list, int v, int e)
{

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacent_list[u].push_back(v);
    }

    for (int i = 0; i < v; i++)
    {
        cout << i;
        for (auto x : adjacent_list[i])
        {
            cout << " -> " << x;
        }
        cout << "\n";
    }
}
void bfs(vector<list<int>> al, int v)
{
    queue<int> q;
    bool vis[v] = {false};
    q.push(0);

    cout << "\n\nBFS : ";
    while (!q.empty())
    {
        auto node = q.front();
        cout << node << " ";
        q.pop();
        for (auto x : al[node])
        {
            if (!vis[x])
            {
                vis[x] = true;
                q.push(x);
            }
        }
    }
    cout << "\n";
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<list<int>> adjacent_list(v);
    build_adjacent_list(adjacent_list, v, e);
    bfs(adjacent_list, v);
}