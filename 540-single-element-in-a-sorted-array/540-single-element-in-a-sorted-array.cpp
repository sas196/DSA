class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
            int n=arr.size();
           int l=0,h=n-1;
        while(l<h){
            int mid=(l+h)/2;
            if(mid>0 and mid<n and arr[mid]!=arr[mid-1] and arr[mid]!=arr[mid+1])return arr[mid];
            if(mid%2!=0 and arr[mid]==arr[mid-1]){
                l=mid+1;
            }
            else if(mid%2==0 and arr[mid]==arr[mid+1]){
                l=mid+1;
            }
            else h=mid-1;
        }
        return arr[l];
    }
};