auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = 1;
        int cm = 1; 
        if (nums.size() == 1) return 1;
        if (nums.size() == 0) return 0;
        for (int i = 0 ; i < nums.size() - 1 ; ++i){
            if (nums[i] == nums[i+1] -1) {
                cm++;
                m = max(m,cm);
            } else if(nums[i] != nums[i+1]) cm=1;
        }
        return m ;
    }
};
