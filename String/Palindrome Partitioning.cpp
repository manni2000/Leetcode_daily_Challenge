 #include<bits/stdc++.h>
 using namespace std;
 
 void dfs(string& s, int start, vector<string>& path, vector<vector<string>>& result)
    {
      int n=s.size();
      if(start==n){
          result.push_back(path);
      }
      else{
          for(int i=start;i<n;i++){
              if(isPalidrome(s,start, i)){
                  path.push_back(s.substr(start, i-start+1));
                  dfs(s,i+1,path,result);
                  path.pop_back();
              }
          }
       }
    } 

    bool isPalidrome(string &s, int l, int r){
        while(l<r){
          if(s[l++]!=s[r--]){
              return false;
          }
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path;
        dfs(s,0, path, result);
        return result;
    }

int main(){
    string s = "example";
    vector<vector<string>> partitions = partition(s);
    for (auto partition : partitions) {
        for (auto str : partition) {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}