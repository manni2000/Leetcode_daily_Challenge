  int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>Trusted(n+1, 0);
        for(auto people: trust){
            Trusted[people[0]]--;
            Trusted[people[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(Trusted[i]==n-1) return i;
        }
        return -1;
    }