class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
            int low=0,high=0,ans=-1;
            for(int i=0;i<weights.size();i++){
                    high+=weights[i];
                    low=max(low,weights[i]);
            }
            //cout<<low<<high;
            int count=1;
            while(low<high){
                    if(low==high)return low;
                   int mid=(low+high)/2;
                   // cout<<mid<<" "<<low<<" "<<high<<" ";
                    int temp=0,count=1;
                    for(int i=0;i<weights.size();i++){
                           
                            if(temp+weights[i]<=mid)
                                    temp+=weights[i];
                            
                           
                          else{
                                   // i--;
                                     count++;
                                    temp=weights[i];
                                   
                            }
                    }
                    //if(temp==weights[weights.size()-1])
                   cout<<count<<" ";
                   if(days>=count){
                           high=mid;
                          
                   }
                    else low=mid+1;
                   
            }
            return low;
        
    }
};