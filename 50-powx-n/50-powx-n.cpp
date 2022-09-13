class Solution {
public:
    double pw(double x,int y){
       double temp;
    if (y == 0)
        return 1.000;
    temp = pw(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
    }
    double myPow(double x, int n) {
        if(x==0.0)return 0;
        if(n==0 or x==1.0000)return 1;
        if(n>0){
            if(n%2!=0){
            int m=n-1;
            return x*pw(x,m);
            }
            else return pw(x,n);
        }
        else{
           if(n%2!=0){
               
            int m=abs(n)-1;
               cout<<m;
            return 1.0/(x*pw(x,m));
            }
            else return 1.0/pw(x,n);
        }
    }
};