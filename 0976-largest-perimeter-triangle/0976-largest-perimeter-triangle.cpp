class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int maxi=0;
        for(int i=0;i<=nums.size()-3;i++){
        int a=nums[i+0];
        int b=nums[i+1];
        int c=nums[i+2];
        if(a+b<=c)continue;
        if(a+c<=b)continue;
        if(b+c<=a)continue;;
        maxi=max(a+b+c,maxi);
        }
        return maxi;
    }
};