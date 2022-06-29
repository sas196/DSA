class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        while(low<high){
           // if(low==high)return low;
            int mid=(low+high)/2;
            //if((mid<arr.size()||arr[mid]>arr[mid-1])&&(mid>0||arr[mid]>arr[mid+1]))return mid;
            if (arr[mid]>arr[mid+1])high=mid;
            else low=mid+1;
        }
        return low;
    }
};