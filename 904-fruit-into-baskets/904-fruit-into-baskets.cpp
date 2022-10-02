class Solution {
public:
    int totalFruit(vector<int>& fruits) {
            unordered_map<int,int>pq;
            int i=0,j=0,maxi=0;
            while(j<fruits.size()){
                    pq[fruits[j]]++;
                    if(pq.size()<=2){
                            int ans=0;
                          for(auto it:pq){
                                  ans+=it.second;
                                  
                          }
                            maxi=max(maxi,ans);
                    }
                    if(pq.size()>2){
                            while(i<j and pq.size()>2){
                                    pq[fruits[i]]--;
                                   if(pq[fruits[i]]==0) pq.erase(fruits[i]);
                                    i++;
                            }
                    }
                    j++;
            }
        return maxi;
    }
};