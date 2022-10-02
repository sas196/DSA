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
        int i=1,j=s1.size();
            if(hash1==hash2)return true;
        while(j<s2.size()){
                hash2[s2[j]-'a']++;
                hash2[s2[i-1]-'a']--;
                if(hash1==hash2)return true;
                i++;j++;
        }
        return false;
    }
};