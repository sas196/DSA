class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
            unordered_map<int,bool>pq;
            vector<int>ans;
            int n=nums.size();
            for(int i=0;i<n;i++){
                    pq[nums[i]]=true;
                    
            }
            for(int i=1;i<=n;i++){
                    if(pq.find(i)==pq.end())ans.push_back(i);
            }
        return ans;
    }
};