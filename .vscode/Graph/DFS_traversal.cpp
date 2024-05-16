#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls){
        vis[node] =1;
        ls.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it,adj, vis, ls);
            }
        }
    }


    public:
    vector<int> dfsOfGraph(int v, vector<int> adj[]){
        int n = adj->size();
        int vis[n] ={0};
        int start =0;
        vector<int> ls;
    }
};


int main(){
    
return 0;
}