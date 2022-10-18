class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>arr(n+1,0);
        
        for(auto it:nums){
            arr[it]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(arr[i]>1)ans.push_back(i);
        }
        return ans;
    }
};