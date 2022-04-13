class Solution {
public:
    

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        list<int>li;
        int l=0,r=0;
        while(r<nums.size()){
            if(li.empty()){
                li.push_back(nums[r]);
            }
            else{
                while(!li.empty()&&li.back()<nums[r]){
                    li.pop_back();
                }
                li.push_back(nums[r]);
            }
            if(r-l+1<k){
                r++;
            }
            else if(r-l+1==k){
                ans.push_back(li.front());
                if(li.front()==nums[l]){
                    li.pop_front();
                }
                l++;r++;
            }
        }
       
        return ans;
    }
};