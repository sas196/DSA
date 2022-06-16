class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int top=0,bot=n-1,left=0,right=n-1;
        
        int dir=0;
        int k=1;
     while(top<=bot&&left<=right){
            if(dir==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=k++;
            }
                top++;
            }
           else if(dir==1){
            for(int i=top;i<=bot;i++){
                matrix[i][right]=k++;
            }
                right--;
            }
           else if(dir==2){
            for(int i=right;i>=left;i--){
                matrix[bot][i]=k++;
            }
                bot--;
            }
           else if(dir==3){
            for(int i=bot;i>=top;i--){
                matrix[i][left]=k++;
            }
              left++;  
            }
            
            dir=(dir+1)%4;
        }
        return matrix;
        
    }
};