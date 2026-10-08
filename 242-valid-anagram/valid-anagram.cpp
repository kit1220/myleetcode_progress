class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for (int i = 0 ; i < int(s.size()) ; ++i) v1[int(s[i])-97]++;
        for (int i = 0 ; i < int(t.size()) ; ++i) v2[int(t[i])-97]++;
        for (int i = 0 ; i < 26 ; ++i) if (v1[i] != v2[i]) return false ;
        return true ;
    }
};
