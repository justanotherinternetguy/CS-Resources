#include <bits/stdc++.h>
using namespace std;

// Adjacency Matrix is one way to represent a graph


int main(void) {
    /*
    * 2D array of V x V
        * V is the # of vertices
    * Let 2D array be adj[][]
    * adj[i][j] = 1 means that there is an edge from vertex i to vertex j
    * adj[i][j] = w means that there is an edge from vertex i to vertex j WITH A WEIGHT w
    
    * Remove an edge + Queries are done in constant time
    * Space complexity is quadratic
    * Adding vertex is quadratic
    * All neighbors of vertex is quadratic
    */
    
    int v, e; // v for vertices, e for edges
    
    
    cin >> v >> e;
    int adjMatrix[v+1][e+1];
    for (int i = 0; i < e ; i++) {
        int u, v;
        cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    } 
}
