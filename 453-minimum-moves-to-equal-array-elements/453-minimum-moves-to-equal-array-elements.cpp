class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0,min=INT_MAX;
        for(int it:nums){
            sum+=it;
            if(it<min) min=it;
        }
        return sum-nums.size()*min;
        
    }
};