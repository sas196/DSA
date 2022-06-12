class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l,r,ans=INT_MAX,a,three;
        int s=nums.size();
        for(int i=0;i<=s-2;i++){
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                three=nums[i]+nums[l]+nums[r];
                if(three==target){
                    return three;
                }
                else if(abs(three-target)<ans){
                    ans=abs(three-target);
                    a=three;
                }
                else{
                    if(three>target)r--;
                    else l++;
                }
            }
        }
        return a;
    }
};