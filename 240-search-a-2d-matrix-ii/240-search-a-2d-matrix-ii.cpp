class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0;
        int e=n-1;
        while(s<m and e>=0){
            if(matrix[s][e]==target)return true;
            else if(matrix[s][e]<target)s=s+1;
            else e=e-1;
            
        }
      return false;  
    }
};