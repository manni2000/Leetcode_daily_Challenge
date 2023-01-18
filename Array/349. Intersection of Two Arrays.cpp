#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> set1, set2;
    for (int num : nums1)
    {
        set1.insert(num);
    }
    for (int num : nums2)
    {
        set2.insert(num);
    }
    vector<int> result;
    for (int num : set1)
    {
        if (set2.count(num))
        {
            result.push_back(num);
        }
    }
    return result;
}