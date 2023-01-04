#include<bits/stdc++.h>
using namespace std;

int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> m;
        for(int i=0; i<tasks.size(); i++) {
            m[tasks[i]]++;
        }
        int round=0;
        for(auto it:m){
           if(it.second<=1) return -1;

           else if(it.second==2) round++;

           else round+=ceil((double)it.second/3.0);
        }
        return round;
    }