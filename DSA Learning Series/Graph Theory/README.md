# GRAPH THEORY

## BREADTH FIRST SEARCH (BFS)
As a result of how the algorithm works, the path found by breadth first search to any node is the shortest path to that node, i.e the path that contains the smallest number of edges in unweighted graphs.
**Time Complexity : O(n+m)**  , _where n is number of vertices and m is the number of edges._

### Description
The algorithm can be understood as a fire spreading on the graph: at the zeroth step only the source s is on fire. At each step, the fire burning at each vertex spreads to all of its neighbors. In one iteration of the algorithm, the "ring of fire" is expanded in width by one unit.

Create a queue q which will contain the vertices to be processed and a Boolean array used[] which indicates for each vertex, if it has been lit (or visited) or not.
Initially, push the source s to the queue and set used[s]=true, and for all other vertices v set used[v]=false. Then, loop until the queue is empty and in each iteration, pop a vertex from the front of the queue. Iterate through all the edges going out of this vertex and if some of these edges go to vertices that are not already lit, set them on fire and place them in the queue.

### Implementation
```c++
vector<vector<int>> adj;  // adjacency list representation
int n; // number of nodes
int s; // source vertex

queue<int> q;
vector<bool> used(n);
vector<int> d(n), p(n);

q.push(s);
used[s] = true;
p[s] = -1;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : adj[v]) {
        if (!used[u]) {
            used[u] = true;
            q.push(u);
            d[u] = d[v] + 1;
            p[u] = v;
        }
    }
}
```

### Applications
- Find the shortest path from a source to other vertices in an unweighted graph.

- Find all connected components in an undirected graph in O(n+m) time.

- Finding a solution to a problem or a game with the least number of moves : if each state of the game can be represented by a vertex of the graph, and the transitions from one state to the other are the edges of the graph.

- Finding the shortest cycle in a directed unweighted graph: Start a breadth-first search from each vertex. As soon as we try to go from the current vertex back to the source vertex, we have found the shortest cycle containing the source vertex. At this point we can stop the BFS, and start a new BFS from the next vertex. From all such cycles (at most one from each BFS) choose the shortest.

- Find all the edges that lie on any shortest path between a given pair of vertices (a,b). To do this, run two breadth first searches: one from a and one from b. Let da[] be the array containing shortest distances obtained from the first BFS (from a) and db[] be the array containing shortest distances obtained from the second BFS from b. Now for every edge (u,v) it is easy to check whether that edge lies on any shortest path between a and b: the criterion is the condition da[u]+1+db[v]=da[b].


## DEPTH FIRST SEARCH (DFS)
Depth First Search finds the lexicographical first path in the graph from a source vertex u to each vertex. Depth First Search will also find the shortest paths in a tree (because there only exists one simple path), but on general graphs this is not the case.

**Time Complexity : O(m+n)**

### Description
The idea behind DFS is to go as deep into the graph as possible, and backtrack once you are at a vertex without any unvisited adjacent vertices.

It is very easy to describe / implement the algorithm recursively: We start the search at one vertex. After visiting a vertex, we further perform a DFS for each adjacent vertex that we haven't visited before. This way we visit all vertices that are reachable from the starting vertex.

### Implementation
```c++
vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}
```

### Classification Of Edges
**1. Tree Edge:**  If v is visited after u then edge (u,v) is called a tree edge. In other words, if v is visited for the first time and u is currently being visited then (u,v) is called tree edge.
**2. Back Edge:** If v is an ancestor of u, then the edge (u,v) is a back edge. v is an ancestor exactly if we already entered v, but not exited it yet. Back edges complete a cycle as there is a path from ancestor v to descendant u (in the recursion of DFS) and an edge from descendant u to ancestor v (back edge), thus a cycle is formed.
**3. Forward Edge:** If v is a descendant of u, then edge (u,v) is a forward edge. In other words, if we already visited and exited v and entry[u]<entry[v] then the edge (u,v) forms a forward edge.
**4. Cross Edge:** if v is neither an ancestor or descendant of u, then edge (u,v) is a cross edge. In other words, if we already visited and exited v and entry[u]>entry[v] then (u,v) is a cross edge.

### Applications
-Find any path in the graph from source vertex u to all vertices.

-Find lexicographical first path in the graph from source u to all vertices.

-Check if a vertex in a tree is an ancestor of some other vertex:

-Find the lowest common ancestor (LCA) of two vertices.

-Topological sorting: Run a series of depth first searches so as to visit each vertex exactly once in O(n+m) time. The required topological ordering will be the vertices sorted in descending order of exit time.

-Check whether a given graph is acyclic and find cycles in a graph. (As mentioned above by counting back edges in every connected components).

-Find strongly connected components in a directed graph: First do a topological sorting of the graph. Then transpose the graph and run another series of depth first searches in the order defined by the topological sort. For each DFS call the component created by it is a strongly connected component.

-Find bridges in an undirected graph: First convert the given graph into a directed graph by running a series of depth first searches and making each edge directed as we go through it, in the direction we went. Second, find the strongly connected components in this directed graph. Bridges are the edges whose ends belong to different strongly connected components.


## DIJKSTRA's ALGORTIHM
This problem is also called single-source shortest paths problem.

### Algorithm
Let's create an array d[] where for each vertex v we store the current length of the shortest path from s to v in d[v]. Initially d[s]=0, and for all other vertices this length equals infinity. In the implementation a sufficiently large number (which is guaranteed to be greater than any possible path length) is chosen as infinity.

d[v]=∞, v≠s
In addition, we maintain a Boolean array u[] which stores for each vertex v whether it's marked. Initially all vertices are unmarked:

u[v]=false
The Dijkstra's algorithm runs for n iterations. At each iteration a vertex v is chosen as unmarked vertex which has the least value d[v]:

Evidently, in the first iteration the starting vertex s will be selected.

The selected vertex v is marked. Next, from vertex v relaxations are performed: all edges of the form (v,to) are considered, and for each vertex to the algorithm tries to improve the value d[to]. If the length of the current edge equals len, the code for relaxation is:

d[to]=min(d[to],d[v]+len)
After all such edges are considered, the current iteration ends. Finally, after n iterations, all vertices will be marked, and the algorithm terminates. We claim that the found values d[v] are the lengths of shortest paths from s to all vertices v.

Note that if some vertices are unreachable from the starting vertex s, the values d[v] for them will remain infinite. Obviously, the last few iterations of the algorithm will choose those vertices, but no useful work will be done for them. Therefore, the algorithm can be stopped as soon as the selected vertex has infinite distance to it.

### Implementation
```cpp
const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if (d[v] == INF)
            break;

        u[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}
```
