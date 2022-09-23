class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
            int l=0,h=nums.size()-1;
            int n=nums.size();
            if(n==1)return nums[0];
            while(l<=h){
                    //if(l==h)return mid[l];
                    int mid=(h+l)/2;
                   // cout<<mid<<" ";
                    if(l==h)return nums[l];
                    if(( nums[mid]!=nums[mid-1]) and (nums[mid]!=nums[mid+1])) {
                       return nums[mid];     
                    }
                    else if (nums[mid]==nums[mid-1]){
                            if((mid-l+1)%2==0)l=mid+1;
                            else h=mid-2;
                    }
                    else if (nums[mid]==nums[mid+1]){
                            if((h-mid+1)%2!=0)l=mid+2;
                            else h=mid-1;
                    }
                    
            }
            
        return nums[l];
    }
};