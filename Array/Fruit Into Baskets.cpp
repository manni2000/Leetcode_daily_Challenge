  int totalFruit(vector<int> &tree) {
        unordered_map<int, int> ct;
        int i, j;
        int ans = INT_MIN;
        for (i = 0, j = 0; j < tree.size(); ++j) {
            ct[tree[j]]++;
            while(ct.size() > 2) {
                if (--ct[tree[i]] == 0)ct.erase(tree[i]);
                i++;
            }
            ans=max(ans,(j-i+1));
        }
        return ans;
    }