class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>pq;
        
        int s=0,c=0;
        pq[s]=1;
        for(int it:nums){
           s+=it;
            if(pq.find(s-k)!=pq.end()){
                c+=pq[s-k];
            }
            pq[s]++;
            
        }
        return c;
    }
};