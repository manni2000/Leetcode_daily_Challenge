#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
         }
            queue<int>q;
            vector<int>vis(n,0);
            q.push(source);
            vis[source]=1;

            while(!q.empty()){
                int top = q.front();
                q.pop();
                if(top == destination) return true;

                for(int i=0;i<graph[top].size();i++){
                    if(vis[graph[top][i]]==0){
                        q.push(graph[top][i]);
                        vis[graph[top][i]]=1;
                    }
                }
            }
        return false;
    }
};