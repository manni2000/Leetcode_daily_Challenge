#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);

        stack<int> st;

        for(int i=n-1;i>=0;--i)
        {
          while(!st.empty() && temperatures[st.top()]<=temperatures[i]){  //temp[st.top]=76;
              st.pop();
          }
          if(!st.empty()){
             ans[i]=st.top()-i;  //ans = 6th-index - 5th-index
          }
          st.push(i);
        }
        return ans;
    }
};

//Topic related to NextGreaterElement(stack)