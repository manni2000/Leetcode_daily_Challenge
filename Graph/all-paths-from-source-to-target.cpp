#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        queue<vector<int>> q;
        q.push({0});

        while(!q.empty()){
            vector<int> path = q.front();
            q.pop();

            if(path.back() == size(graph)-1){
                ans.push_back(path);
            }
            else{
               for(int child: graph[path.back()]){ //child=Graph[0]=1, Graph[1]=2
                   path.push_back(child); // path= 0,1
                   q.push(path);     //q=1
                   path.pop_back();  //
               }
            }
        }
         return ans; 
    }
};