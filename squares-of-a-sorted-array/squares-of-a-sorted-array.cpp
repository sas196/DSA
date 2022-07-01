class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int i=0;
      int j=nums.size()-1;
      vector<int>p(nums.size());
      int k=j;
      while(i<=j){
        int s1=nums[i]*nums[i];
        int s2=nums[j]*nums[j];
        if(s1<=s2){
          p[k]=s2;
          j--;
          k--;
        }
        else{
          p[k]=s1;
          i++;
        k--;}
      }
    return p;
    }
};