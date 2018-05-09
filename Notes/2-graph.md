# Handling Inputs
- Adjacency List: O(E + V)
  - `vector<pair<int,int>> graph[1000]` : graph[a] = <b, weight>

- Edge List: O(E)
  - `vector<pair<pair<int, int>, int>> graph` : graph[i] = <<a, b>, weight>

- Adjacency Matrix: O(V * V)
  - `graph[V][V]` : graph[a][b] = weight

- Coordinates are given (Euclidean?)
  - Edge List : `vector<tuple<double, int, int>> graph`
```
        for (int i = 0; i < p; i++) {
            for (int j = i + 1; j < p; j++) {
                int a = coord[i].first - coord[j].first;
                int b = coord[i].second - coord[j].second;
                double d = sqrt(a * a + b * b);
                graph.emplace_back(d, i, j);
            }
        }
```
# Miscellaneous
- How to handle string datapoints?
  - Use `map` or `unordered_map`, `std::count` to convert to integer datapoints (454900d) 
  
  # Topics
- Bipartite graph determination
  - traverse by DFS / BFS, if two neighboring vertices have same color, break
- Strongly Connected Components (Kosaraju)
  - DFS, stack, reverse_graph, stack order DFS
- Minimum Spanning Tree (Prim)
  - priority queue, push negative to pq, mst += front
- Minimum Spanning Tree (Kruskal) 
  - edge list, sort by weight, union find disjoint set to check cycle. 
  - for each edge, if find(a)==find(b): continue
- Union find disjoint set
  - root compression
- DFS
  - recursive function call (stack)
- BFS
  - queue with iteration
- Segment tree
  - work in progress 
  - https://www.acmicpc.net/blog/view/9
  - http://www.crocus.co.kr/648
 - Fenwick tree
 - Single Sourced Shortest Path
   - Unweighted : BFS 
   - Weighted : Djikstra's with `priority_queue`
   - Weighted with potential negative weight cycle : Bellman Ford


# MST Variations
- Minimum Spanning Forest 
  - forest of K connected components in the least cost way
  - Run Kruskal's as per normal, but as soon as the number of connected components == K, terminate
- Second Best MST
  - Run Kruskal's as per normal, record edges of MST (V-1)
  - For each edges of MST, replace with some other edge and run Kruskal's
  - Count number of edges to avoid illegal values passing through ( total number of edges should be V-1)
  - When certain edges are skipped, the resulting graph can be incomplete and Kruskal's might not be able to reach all vertices.

# Single Source Shortest Path Problems
   - Unweighted : BFS 
      - parent tracking (record each point's parent)
   - Weighted : Djikstra's with `priority_queue`
      - Initialize `dist` with INF, and for top of the pq : `dist[v] = min(dist[v], dist[u] + w_u_v)`
      - Runs into infinite loop if negative weight cycle exists. 
      - Note that we want `priority_queue` to return smallest values. 
   - Weighted with potential negative weight cycle : Bellman Ford
      - Safe but slower than Djikstra's with `priority_queue`	
