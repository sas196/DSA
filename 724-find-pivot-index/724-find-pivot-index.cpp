class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int sum=0;
        int n=a.size();
        int b[n];int c[n];
       for(int i=0;i<n;i++){
        sum+=a[i];
        b[i]=sum;
    }
    sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        c[i]=sum;
    }
    for(int i=0;i<n;i++){
        if(b[i]==c[i])return i;
    }
    return -1;
        
    }
};