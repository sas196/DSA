class Solution {
  public:
   bool check(int v,vector<vector<int>>& adj,vector<int>&visited,vector<int>&isvis,int curr){
        if(visited[curr]){
            if(isvis[curr])return true;
        }
        visited[curr]=1;
        isvis[curr]=1;
        for(auto it:adj[curr]){
            if(visited[it]==0){
            if(check(v,adj,visited,isvis,it))return true;
            }
            else if (isvis[it]==1)return true;
        }
        isvis[curr]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
       int V=adj.size();
        vector<int>visited(V,0);
        vector<int>safe(V,0);
        for(int i=0;i<V;i++){
            if(check(V,adj,visited,safe,i)==true)continue;
        }
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(safe[i]==0)ans.push_back(i);
        }
        return ans;
        
        
        // code here
    }
};








