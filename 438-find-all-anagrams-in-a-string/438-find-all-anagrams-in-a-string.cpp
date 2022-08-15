class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>phash(26,0);
        vector<int>hash(26,0);
        vector<int>ans;
        if(s.size()<p.size())return {};
        for(auto it:p){
            phash[it-'a']++;
            
        }
        for(int i=0;i<p.size();i++){
            hash[s[i]-'a']++;
        }
        if(phash==hash)ans.push_back(0);
        int ci=1,end=p.size();
        while(end<s.size()){
            hash[s[ci-1]-'a']--;
            hash[s[end]-'a']++;
            if(hash==phash)ans.push_back(ci);
            ci++;end++;
        }
 return ans;       
    }
};