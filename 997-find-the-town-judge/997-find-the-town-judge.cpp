class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1&&trust.size()==0)return 1;
        unordered_map<int,int>pq;
        unordered_map<int,int>map;
        
        for(int i=0;i<trust.size();i++){
            pq[trust[i][1]]++;
            map[trust[i][0]]++;
        }
        for(int i=0;i<trust.size();i++){
            if(pq[trust[i][1]]==n-1&&map[trust[i][1]]==0)return trust[i][1];
        }
        
        return -1;
    }
};