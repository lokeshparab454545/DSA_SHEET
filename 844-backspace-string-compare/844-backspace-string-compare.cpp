class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>s1, s2;
        for(auto it: s){
            if(it == '#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }
            else{
                s1.push(it);
            }
        }
        for(auto it: t){
            if(it == '#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }
            else{
                s2.push(it);
            }
        }
        return s1 == s2;
    }
};