#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Solution{
    private:
    bool dfscheck(int node, vector<int> adj[], int vis[], int pathvis[]){
        vis[node] =1;
        pathvis[node] =1;

        for(auto it: adj[node]){
            if(!vis[it]){
                if(dfscheck(it, adj, vis, pathvis)==true)
                    return true;
            }

            else if(pathvis[it]){
                return true;
            }
        }
        pathvis[node] =0;
        return false;
    }


    public:
    bool iscyclic(int v, vector<int> adj[]){
        int vis[v] = {0};
        int pathvis[v] = {0};
        for (int i = 0; i < v; i++)
        {
            if(!vis[i]){
                if(dfscheck(i, adj, vis, pathvis) == true) return true;
            }
        }
        return false;
    }
}


int main(){
    
return 0;
}