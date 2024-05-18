#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
void dfs(int node, vector<vector<int>> $adjls[], int vis[]){
    vis[node]= 1;
    for(auto it: adjls[node]){
        if(!vis[it]){
            dfs(it, adjls, vis);
        }
    }
}

    public:

    int numPRovinces(vector<vector<int>> adj, int v)
    {
        vector<int> adj[v];
        for(int i=0; i<v; i++){
            for(int j=0; j<v;j++){
                if(adj[i][j] == 1 && i !=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int vis[v] = {0};
        int count =0;
        for (int i = 0; i < v; i++)
        {
            if(!vis[i]){
                count++;
                dfs(i,adjls,vis);
            }
        }
        
    }
};


int main(){
    
return 0;
}