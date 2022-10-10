class Solution {
public:
  
    string breakPalindrome(string p) {
        if(p.size()==1)return "";
        char mini='a';
        
            for(int i=0;i<p.size()/2;i++){
                if(p[i]!=mini){
                    p[i]=mini;
                    return p;
                }
            }
           
        p[p.size()-1]='b';
        return p;
    }
};