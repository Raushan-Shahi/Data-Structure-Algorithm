#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// TC - O(N +2E)  + O(N) -> this is the for loop time complexity
// SC - O(N) + O(N)

class Solution
{
private:
    bool detect(int src, vector<int> adj[], int vis[])
    {
        vis[src] = 1;
        queue<pair<int, int>> q;
        q.push({src, -1});
        while (!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto adjacentnode : adj[node])
            {
                if (!vis[adjacentnode])
                {
                    vis[adjacentnode] = 1;
                    q.push({adjacentnode, node});
                }
                else if (parent != adjacentnode)
                {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool iscycle(int v, vector<int> adj[])
    {
        int vis[v] = {0};
        for (int i = 0; i < v; i++)
        {
            if (!vis[i])
            {
                if (detect(i, adj, vis))
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    return 0;
}