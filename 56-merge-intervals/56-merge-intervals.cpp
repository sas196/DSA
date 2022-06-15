class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(ans.size()==0){
                ans.push_back(intervals[i]);
            }
            else{
                vector<int>&v=ans.back();
                int y=v[1];
                if(v[1]>=intervals[i][0]){
                    v[1]=max(v[1],intervals[i][1]);
                   // ans.push_back(v);
                }
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        
        return ans;
    }
};