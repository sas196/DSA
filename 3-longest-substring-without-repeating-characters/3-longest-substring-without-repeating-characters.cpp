class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.length()==0||s.length()==1){
        return s.length();
      }
      
      unordered_map<char,int>pq;
      
      int max=INT_MIN;
      int c=0;
      int m=0;
      for(int i=0;i<s.length();i++){
        pq[s[i]]++;
        if(pq[s[i]]==1){
          c++;
        }
        else{
          if(max<c)
            max=c;
          c=0;
          pq.clear();
          i=m++;
        }
      }
      
      max = max<c ?c :max;
     
      
 
   return max;
    }
};