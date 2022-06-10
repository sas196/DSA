class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> pq;
        sort(nums.begin(),nums.end());
        int l,r;
        int prev=0;
        //int l=1,r=nums.size()-1;
          vector<int>ans;
        for(int i=0;i<nums.size();i++){
           l=i+1;
            r=nums.size()-1;
            if((i==0||(i>0&&nums[i-1]!=nums[i])&&nums[i]<=0)){
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    ans.push_back(nums[i]);
                    ans.push_back(nums[l]);
                    ans.push_back(nums[r]);
                     pq.push_back(ans);
                    ans.clear();
                    while(l<r&&nums[l]==nums[l+1]){
                        l++;
                    }
                    l++;
                   
                }
               else if(nums[i]+nums[l]+nums[r]>0){
                    r--;
                   
                }
                else{
                    l++;
                }
            }
            }
            
          
        }
      return pq;  
    }
};