class Solution {
public:
        int bs(vector<int>&nums,int target,int l,int h){
                while(l<=h){
                        int mid=(l+h)/2;
                        if(nums[mid]==target)return mid;
                        else if(nums[mid]<target)l=mid+1;
                        else h=mid-1;
                }
                return -1;
        }
    int search(vector<int>& nums, int target) {
            int l=0,h=nums.size()-1;
            while(l<h){
                    int mid=l+(h-l)/2;
                    cout<<mid;
                    if(nums[mid]==target)return mid;
                   
                    else if(nums[mid]>=nums[l]){
                            if(target>=nums[l] and target<=nums[mid])return bs(nums,target,l,mid-1);
                            else l=mid+1;
                    }
                    else if(nums[mid]<=nums[h]){
                            if(target>=nums[mid] and target<=nums[h])return bs(nums,target,mid+1,h);
                            else h=mid-1;
                            
                    }
            }
           if(nums[l]==target or nums[h]==target)return l;
       //cout<<nums[h]; 
        return -1;
    }
};