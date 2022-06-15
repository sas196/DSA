class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>pq;
        for(int i=0;i<nums.size();i++){
            pq[nums[i]]++;
        }
        
        int m=0;
        int c=1;
        for(int i=0;i<nums.size();i++){
            if(pq[nums[i]-1]>0){
                continue;
            }
            int x=nums[i]+1;
            while(pq[x]!=00){
              // cout<<pq[nums[i]++];
                c++;
                x++;
            }
            if(c>m){
                cout<<c<<" ";
                m=c;
                //c=1;
            }
            c=1;
        }
        return m;
    }
};