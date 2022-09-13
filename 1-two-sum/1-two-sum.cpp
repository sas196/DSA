class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>pq;
        vector<int>temp=nums;
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        while(s<e){
            if(nums[s]+nums[e]==target){
                pq.push_back(s);
                 pq.push_back(e);
            }
            if(nums[s]+nums[e]<target)s=s+1;
            else e=e-1;
        }
        for(int i=0;i<nums.size();i++){
            if(temp[i]==nums[pq[0]]){
                pq[0]=i;
                break;}
        }
                for(int i=0;i<nums.size();i++){
            if(temp[i]==nums[pq[1]] and i!=pq[0]){
                pq[1]=i;
                break;}
        }
        return pq;
    }
};