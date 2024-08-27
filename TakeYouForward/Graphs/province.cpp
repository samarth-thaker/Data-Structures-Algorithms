//User function Template for C++

class Solution {
   void dfs(int node, vector<int> adjLs[], vector<int>& vis) {
       vis[node] = 1;
       for(auto it: adjLs[node]){
           if(!vis[it]){
               dfs(it, adjLs, vis);
           }
       }
   }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjLs[V];
        
        // Building the adjacency list from the adjacency matrix
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(adj[i][j] == 1 && i != j){
                    adjLs[i].push_back(j);
                }
            }
        }
        
        vector<int> vis(V, 0); // Initialize visited array with 0
        int count = 0;
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                count++;
                dfs(i, adjLs, vis);
            }
        }
        
        return count;
    }
};
//Leetcode
class Solution {
public:
    void dfs(int node, vector<int> adjLs[], vector<int>& vis) {
        vis[node] = 1;
        for(auto it: adjLs[node]){
            if(vis[it]==0){
                dfs(it, adjLs, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> adjLs[V];
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adjLs[i].push_back(j);
                }
            }
        }
        
        vector<int> vis(V, 0);  
        int count = 0;
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                count++;
                dfs(i, adjLs, vis);
            }
        }
        return count;
    }
};
