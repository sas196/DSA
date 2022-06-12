class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_map<int,int>pq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=0;
            }
            pq[nums[i]]++;
            
        }
        int i=1;
        while(i){
            if(pq[i]>0){
                i++;
            }
            else{
                break;
            }
        }
        return i;
    }
};