vector<vector<int>> graph;

   int dfs(vector<bool>&hasApple, int node, int d, int prev){
       int res=0;

       for(int &i:graph[node]){
           if(i!=prev){
               int temp=dfs(hasApple,i,d+1,node);

           if(temp){
              res+=temp-d;
          }
         }
       }
       if(res || hasApple[node]){
           return res+d;
       }
       return 0;
   }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
       graph.resize(n);

       for(vector<int> &e : edges){
           graph[e[0]].push_back(e[1]);
           graph[e[1]].push_back(e[0]);
       }
       return dfs(hasApple, 0, 0, -1)*2; 
    }