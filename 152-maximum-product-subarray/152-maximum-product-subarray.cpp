class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN;
        int pro=1;
        
        for(int i=0;i<nums.size();i++){
            pro=pro*nums[i];
            if(max<pro){
                max=pro;
            }
            if(pro==0){
                pro=1;
            }
        }
        pro=1;
         for(int i=nums.size()-1;i>=0;i--){
            pro=pro*nums[i];
            if(max<pro){
                max=pro;
            }
            if(pro==0){
                pro=1;
            }
        }
        return max;
    }
};