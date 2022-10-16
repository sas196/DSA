class Solution {
public:
    bool isPowerOfThree(int n) {
       int a=0;
        while(pow(3,a)<n){
            a++;
        }
        if(pow(3,a)==n)return true;
        return false;
    }
};