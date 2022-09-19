class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
         unordered_map<int,int>pq;
            int N=arr.size();
        for(int i=0;i<N;i++){
            pq[arr[i]]++;
        }
        int c=1,maxi=0;
        for(int i=0;i<N;i++){
               if(pq[arr[i]+1]>0)continue;
              int x=arr[i]-1; 
  
            while(pq[x]!=00){
               c++; x--;
            }
            maxi=max(maxi,c);
            c=1;
        }
        return maxi;
    }
};