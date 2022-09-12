class Solution {
public:
    bool bs(vector<int>&vec,int t){
        int e=vec.size()-1;
        int s=0;
        while(s<=e){
            int mid=(s+e)/2;
            if(vec[mid]==t)return true;
            else if(vec[mid]>t)e=mid-1;
            else s=mid+1;
        }
        return false;
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
          if(bs(matrix[i],target))return true;
        }
      return false;  
    }
};