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
