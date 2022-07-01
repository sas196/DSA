class Solution {
public:
    int bs(vector<int>nums,int l,int h,int target){
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target)h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(mid<h&&nums[mid]>nums[mid+1]){ans=mid; break;}
            if(mid>l&&nums[mid-1]>nums[mid]){ans=mid-1;break;}
            
            if(nums[l]>nums[mid])h=mid-1;
            else l=mid+1;
            
        }
        
        if(nums[ans]==target)return ans;
        int left= bs(nums,0,ans-1,target);
        if(left!=-1) return left;
        return bs(nums,ans+1,nums.size()-1,target);
            
        
    }
};