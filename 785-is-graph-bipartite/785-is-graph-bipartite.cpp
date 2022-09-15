class Solution {
public:
    bool check (vector<vector<int>>& adj,vector<int>&color,int curr) {
        queue<int>q;
	    q.push(curr);
	    color[curr]=0;
	    while(!q.empty()){
	        int temp=q.front();
	        q.pop();
	        for(auto it:adj[temp]){
	           if(color[it]==-1){
	               color[it]=!(color[temp]);
	               q.push(it);
	           }
	           else{
	               if(color[it]==color[temp])return false;
	               else continue;
	           }
	           
	        }
	    }
	    return true;
    }
       bool isBipartite(vector<vector<int>>& adj){
           vector<int>color(adj.size(),-1);
           for(int i=0;i<adj.size();i++){
               if(color[i]==-1){
                   if(check(adj,color,i)==false)return false;
               }
           }
           
           return true;
       }
};