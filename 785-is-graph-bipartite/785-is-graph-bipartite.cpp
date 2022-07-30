class Solution {
public:
    bool checkBipartite(int i, vector<int>&vis, vector<vector<int>>& adj){
        queue<int>q;
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it: adj[node]){
                if(vis[it] == -1){
                    q.push(it);
                    vis[it] = 1 - vis[node];
                }
                else if(vis[it] == vis[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int>vis(V+1, -1);
	    for(int i=0; i<V; i++){
	        if(vis[i] == -1){
	            if(!checkBipartite(i, vis, adj)) return false;
	        }
	    }
	    return true;
    }
};