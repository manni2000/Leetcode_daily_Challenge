   void fun(vector<int>&nums,int s,vector<int>&path,vector<vector<int>>&ans){
    if(path.size()>1)ans.push_back(path);
    set<int>used;
    for(int i = s;i<nums.size();i++){
        if(used.find(nums[i])!=used.end())continue;
        if(path.empty() or nums[i]>=path.back()){
            used.insert(nums[i]);
            path.push_back(nums[i]);
            fun(nums,i+1,path,ans);
            path.pop_back();
        }
    }
}

vector<vector<int>> findSubsequences(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int>v;
    fun(nums, 0,v, ans);
    return ans;
}