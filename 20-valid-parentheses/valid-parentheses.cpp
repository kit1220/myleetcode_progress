class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        unordered_map<char,char> m = {{'(',')'} , {'[',']'} , {'{','}'}};
        for (char i : s){
            if(i == ')' or i == ']' or i == '}'){
                if (st.empty()) return false;
                if (m[st.top()] == i){
                    st.pop(); 
                    continue;
                }
                else return false;
            }
            st.push(i);
        }
        if (!st.empty()) return false;
        return true;
    }
};
