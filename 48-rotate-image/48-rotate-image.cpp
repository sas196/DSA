class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       // vector<vector<int>>temp=matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[0].size();j++){
              swap(matrix[i][j],matrix[j][i]); 
            }
        }
        int s=0,e=matrix.size(),end=e;
        for(int i=0;i<e;i++){
            for(int j=0;e>-1&&j<end;j++){
                swap(matrix[j][i],matrix[j][e-1]);
                
            }
            e--;
        }
        
        //return matrix;
        
    }
};