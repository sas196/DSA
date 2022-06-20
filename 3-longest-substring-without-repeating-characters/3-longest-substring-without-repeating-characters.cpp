class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.length()==0||s.length()==1){
        return s.length();
      }
      
      unordered_map<char,int>pq;
        int i=0;
        int j=0;
        int count=0;
        for(j;j<s.size();j++){
            while(i<j&&pq.find(s[j])!=pq.end()){
               pq.erase(s[i]);
                i++;
            }
            pq[s[j]]++;
            count=max(count,j-i+1);
            
        }
      
 
   return count;
    }
};