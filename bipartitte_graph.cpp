#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
// TC -> similar to bfs

class Solution{
    public:
    bool isbipartite(int v, vector<int> adj[]){
        queue<int> q;
        q.push(0);
        int color[v];
        for (int i = 0; i < v; i++)
        {
            color[i] = -1;
        }
        color[0] =0;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto it : adj[node]){
                if(color[it] == -1){
                    color[it] = !color[node];
                }
                else if(color[it] == color[node]){
                    return false;
                }
            }
        }
        
        
    }
}

int main(){
    
return 0;
}