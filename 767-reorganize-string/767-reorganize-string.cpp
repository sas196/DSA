class Solution {
public:
    string reorganizeString(string str) {
        string arr=str;
        priority_queue<pair<int,char>>pq;
        int hash[26]={0};
        for(auto it:str){
            hash[it-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i]!=0){
                pq.push({hash[i],i+'a'});
            }
        }
        int i=0,j=1,c=0;
     while(c!=str.size()){
         int a=pq.top().first;
        if(a>(str.size()+1)/2)return "";
         char b=pq.top().second;
         pq.pop();
         while(a--){
             if(i>=str.size()){
                 i=j;
                 j=j+2;
             }
           arr[i]=b;
           c++;
           i=i+2;
         }
         
     }
    cout<<arr;
        return arr;
    }
};