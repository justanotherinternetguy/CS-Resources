#include <bits/stdc++.h>
using namespace std;

// Adjacency Matrix is one way to represent a graph


int main() {
    // n: vertices
    // m: edges
    int n, m;
    cin >> n >> m;
    int adjMat[n+1][n+1];

    for (int i = 0; i < m ; i++) {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }


    for (int a = 0; a < adjMat[])



    return 0;
}
