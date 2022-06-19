class Solution {
public:
    int countOdds(int low, int high) {
    
        int c=0;
        if(low%2!=0) c++;
        if(high%2!=0)c++;
        if(c==2){
            return (high-low+2)/2;
        }
       else if(c==1) return (high-low+1)/2;
        else return (high-low)/2;
        
    }
};