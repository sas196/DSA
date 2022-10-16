class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>st1;
        stack<char>st2;
        for(auto it:s){
            if(st1.size()>0 and it=='#')st1.pop();
            if(st1.size()>=0 and it!='#')st1.push(it);
        }
        for(auto it:t){
            if(st2.size()>0 and it=='#')st2.pop();
            if(st2.size()>=0 and it!='#')st2.push(it);
        }
        cout<<st1.size();
        if(st1.size()!=st2.size())return false;
        else{
            while(st1.size()!=0){
               if(st1.top()!=st2.top())return false;
                st1.pop();
                st2.pop();
            }
        }
        return true;
    }
};