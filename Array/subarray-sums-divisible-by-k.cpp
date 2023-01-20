  #include<bits/stdc++.h>
  using namespace std;
  
  int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    map[0] = 1;
    int sum = 0;
    int count = 0;
    for (int num : nums) {
        sum += num;
        int remainder = (sum % k + k) % k; 
        if (map.count(remainder)) {
            count += map[remainder];
        }
        map[remainder]++;
      }
       return count;
    }
//arr=[4,5,0,-2,-3,1]