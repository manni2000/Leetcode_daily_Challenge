   
                           //Solved using DFS
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<int> visited(n, 0);
        int cnt = 1;
        visited[0] = 1;
        queue<int> q;
        q.push(0);
        while (!q.empty())
        {
            int front = q.front();
            q.pop();
            for (int i = 0; i < rooms[front].size(); i++)
            {
                if (!visited[rooms[front][i]])
                {
                    cnt++;
                    visited[rooms[front][i]] = 1;
                    q.push(rooms[front][i]);
                }
                if (cnt == n)
                {
                    return true;
                }
            }
        }
        return false;
    }
};