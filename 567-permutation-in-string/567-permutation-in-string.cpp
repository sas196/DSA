class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        for(int i=0;i<s1.size();i++){
            hash1[s1[i]-'a']++;
            hash2[s2[i]-'a']++;
        }
        if(hash1==hash2)return true;
        int ci=1,end=s1.size();
        while(end<s2.size()){
            hash2[s2[ci-1]-'a']--;
            hash2[s2[end]-'a']++;
            if(hash2==hash1)return true;
            ci++;end++;
        }
        return false;
    }
};