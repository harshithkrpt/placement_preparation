#include <bits/stdc++.h>
// TODO IMPLEMENT YOUR VERSION
using namespace std;

// 1.Sort all the edges in non - decreasing order of their weight.
// 2. Pick the smallest edge.Check if it forms a cycle with the spanning tree formed so far.If cycle is not formed, include this edge.Else, discard it.
// 3. Repeat step #2 until there are(V - 1) edges in the spanning tree.

class Edge
{
public:
    int src, dest, weight;
};

class Graph
{
public:
    int V, E;

    Edge *edge;
};

Graph *createGraph(int V, int E)
{
    Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];

    return graph;
}

class subset
{
public:
    int parent;
    int rank;
};

int find(subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}

void Union(subset subsets[], int x, int y)
{
    int x1 = find(subsets, x);
    int y1 = find(subsets, y);

    if (subsets[x1].rank < subsets[y1].rank)
    {
        subsets[x1].parent = y1;
    }
    else if (subsets[x1].rank > subsets[y1].rank)
    {
        subsets[y1].parent = x1;
    }
    else
    {
        subsets[y1].parent = x1;
        subsets[x1].rank++;
    }
}

int comp(const void *a, const void *b)
{
    Edge *a1 = (Edge *)a;
    Edge *b1 = (Edge *)b;
    return a1->weight > b1->weight;
}

void krushkals(Graph *g)
{
    int V = g->V;
    Edge res[V];
    int e = 0;
    int i = 0;

    qsort(g->edge, g->E, sizeof(g->edge[0]), comp);

    subset *subsets = new subset[(V * sizeof(subset))];

    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    while (e < V - 1 && i < g->E)
    {
        // Step 2: Pick the smallest edge. And increment
        // the index for next iteration
        Edge next_edge = g->edge[i++];

        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);

        // If including this edge does't cause cycle,
        // include it in result and increment the index
        // of result for next edge
        if (x != y)
        {
            res[e++] = next_edge;
            Union(subsets, x, y);
        }
        // Else discard the next_edge
    }
    cout << "Following are the edges in the constructed MST\n";
    for (i = 0; i < e; ++i)
        cout << res[i].src << " -- " << res[i].dest << " == " << res[i].weight << endl;
    return;
}

int main()
{
    int V = 4; // Number of vertices in graph
    int E = 5; // Number of edges in graph
    Graph *graph = createGraph(V, E);

    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = 10;

    // add edge 0-2
    graph->edge[1].src = 0;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = 6;

    // add edge 0-3
    graph->edge[2].src = 0;
    graph->edge[2].dest = 3;
    graph->edge[2].weight = 5;

    // add edge 1-3
    graph->edge[3].src = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 15;

    // add edge 2-3
    graph->edge[4].src = 2;
    graph->edge[4].dest = 3;
    graph->edge[4].weight = 4;

    krushkals(graph);

    return 0;
}