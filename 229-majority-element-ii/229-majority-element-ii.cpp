class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>pq;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            pq[ nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(pq[nums[i]]>n/3){
                ans.push_back(nums[i]);
                pq.erase(nums[i]);
            }
        }
        return ans;
    }
};