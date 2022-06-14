class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      
      
      
     int m=digits.size();
      if(digits[m-1]!=9){
        digits[m-1]++;
      return digits;
      }
      else{
          for(int i=m-1;i>=0;i--){
            if(digits[i]==9&&i!=0){
              digits[i]=0;
            }
            else if(digits[i]==9&&i==0){
              digits[i]=1;
            digits.push_back(0);  
            }
            else{
              digits[i]++;
              break;
            }
            
          } 
      
      
      }
  return digits;  
    }
};