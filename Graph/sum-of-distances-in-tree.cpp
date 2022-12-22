#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> counter, res;

// Depth-first search function that takes in a node index and a parent index
void dfs(int i, int p = -1) {
    // Iterate through the nodes connected to the current node
    for(auto u : v[i]) {
        // If the node is the parent, skip it
        if(u == p)
         continue;
        // Recursively call the DFS function on the connected node
        dfs(u, i);
        // Update the counter for the current node
        counter[i] += counter[u];
        // Update the result for the current node
        res[i] += res[u] + counter[u];
    }
    // Increment the counter for the current node by 1
    counter[i] += 1;
}

// Second DFS function that takes in a node index, the total number of nodes, and a parent index
void dfs2(int i, int n, int p = -1) {
    // Iterate through the nodes connected to the current node
    for(auto u : v[i]) {
        // If the node is the parent, skip it
        if(u == p) 
            continue;
        // Update the result for the connected node
        res[u] = res[i] - counter[u] + n - counter[u];
        // Recursively call the DFS function on the connected node
        dfs2(u, n, i);
    }
}

// Main function that takes in the number of nodes and a vector of edges
vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
    // Initialize the vector of vectors v with n elements
    v.resize(n);
    // Iterate through the edges and add them to the vector of vectors v
    for(int i = 0; i < n - 1; i++) {
        int a = edges[i][0];
        int b = edges[i][1];
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // Initialize the res and counter vectors with n elements
    res.resize(n);
    counter.resize(n);
    // Call the first DFS function on the root node (node 0)
    dfs(0);
    // Call the second DFS function on the root node (node 0) and the total number of nodes
    dfs2(0, n);
    // Return the result vector
    return res;
 }