class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
            vector<int>ans(t.size());
            stack<int>st;
            int n=t.size();
            for(int i=n-1;i>=0;i--){
                    while(!st.empty()and t[st.top()]<=t[i])st.pop();
                    if(!st.empty()){
                            ans[i]=st.top();
                            st.push(i);
                    }
                    else{
                            ans[i]=-1;
                            st.push(i);
                    }
                    
            }
            for(int i=0;i<n;i++){
                    if(ans[i]==-1)ans[i]=0;
                    else ans[i]=ans[i]-i;
                    
            }
            
return ans;            
        
    }
};