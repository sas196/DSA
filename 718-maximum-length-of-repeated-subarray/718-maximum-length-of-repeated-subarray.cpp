class Solution {
public:
  
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>pq(nums1.size()+1,vector<int>(nums2.size()+1,0));
       int res=0;
        for(int i=1;i<=nums1.size();i++){
            for(int j=1;j<=nums2.size();j++){
                if(nums1[i-1]==nums2[j-1])pq[i][j]=1+pq[i-1][j-1];
                else pq[i][j]=0;
                res=max(res,pq[i][j]);
            }
        }
        return res;
    }
};