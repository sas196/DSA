class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0,bot=m-1,left=0,right=n-1;
        int dir=0;
        while(top<=bot&&left<=right){
            if(dir==0){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
                top++;
            }
            if(dir==1){
            for(int i=top;i<=bot;i++){
                ans.push_back(matrix[i][right]);
            }
                right--;
            }
            if(dir==2){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bot][i]);
            }
                bot--;
            }
            if(dir==3){
            for(int i=bot;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
              left++;  
            }
            
            dir=(dir+1)%4;
        }
        return ans;
    }
};