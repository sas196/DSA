class Solution {
public:
     int helper(vector<int>& days, vector<int>& costs,int ci,vector<int>&pq){
         if(ci>=days.size())return 0;
         // if one day pass 
         if(pq[ci]!=-1)return pq[ci];
         int mini1=costs[0]+helper(days,costs,ci+1,pq);
         //if i buy two day pass
         int c=days[ci]+6;
         int i=ci;
         while(i<days.size()&&c>=days[i]){
             i++;
         }
         int mini2=costs[1]+helper(days,costs,i,pq);
         int d=days[ci]+29;
         int j=ci;
         while(j<days.size()&&d>=days[j]){
             j++;
         }
         int mini3=costs[2]+helper(days,costs,j,pq);
         return pq[ci]=min({mini1,mini2,mini3});
         
         
     }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>pq(days.size()+1,-1);
        return helper(days,costs,0,pq);
        
    }
};