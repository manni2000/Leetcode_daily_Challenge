class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> ans;
        for(int i=0;i<rocks.size();i++)
            ans.push_back(capacity[i]-rocks[i]);
        int j=0;
        sort(ans.begin(),ans.end());
        while(additionalRocks>0 && j<ans.size()){
              additionalRocks-= ans[j];
              j++;
        }
        return additionalRocks<0 ? j-1:j;
    }
};