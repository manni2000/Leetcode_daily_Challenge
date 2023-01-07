#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int lowest = 0;
    int totalgas = 0, totalcost = 0;
    int n = gas.size();
    int currentgas = 0;

    for (int i = 0; i < n; i++)
    {
        totalgas += gas[i];
        totalcost += cost[i];
        currentgas = currentgas + gas[i] - cost[i];

        if (currentgas < 0)
        {
            lowest = i + 1;
            currentgas = 0;
        }
    }
    if (totalgas >= totalcost)
    {
        return lowest;
    }
    return -1;
}