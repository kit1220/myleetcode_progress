class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string,int> m;
        int index = 0 ;
        for (int i = 0 ; i < int(strs.size()) ; ++i){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            if(m.find(temp) == m.end()){
                m[temp] = index;
                v.push_back({strs[i]});
                index++;
            } else v[m[temp]].push_back(strs[i]);
        }
        return v;
    }
};