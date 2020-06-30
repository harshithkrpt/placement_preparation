# Graph

## Adjacent Matrix

- an adjacent matrix of v x v

### AM Pros

- representation is easier and removing an edge is O(1) also checking for edge from u to v is O(1)

### AM Cons

- consumes more space O(v^2) even for sparse graph
- adding a vertex is O(v^2)

## Adjacent List

- an adjacent list of v vertices

### AL Pros

- saves space O(|v|+|e|)
- worst case O(v^2)

### AL Cons

- O(V) to check whether we have a edge or not

## Applications of DFS

- For Weighted Graph , DFS of graph produces minimum spanning tree and all pair shortest path tree

- Detecting Cycle in a graph (check for back_edges)

- Path Finding

- Topological Sorting -> scheduling jobs

- to test if graph is bipartite

- finding strongly connected components of a graph

- solving puzzles ex maze

## Applications of BFS

- Shortest Path and Minimum Spanning Tree for unweighted graph

- Peer to Peer Networks

- Crawlers in Search Engines

- Social Networking Websites

- GPS Navigation systems

- Broadcasting in Network

- In Garbage Collection

- cycle detection in undirected graph

- ford fulkerson algo

- test for bipartite graph

- path finding

- Finding all nodes within one connected component

## Topological Sort

- O(V+E) -> top-sort gives topological ordering

- topological ordering is an ordering of the nodes in a directed graph from node a to node b , node a appears before node b in tbe ordering

- topological orderings are not unique

- a graph with cycle cannot have toplogical ordering (We Use DAG)
