class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out;
        int p = 1 ,o = 1;
        bool flag = false ;
        for (int i = 0 ; i < int(nums.size()) ; ++i ){
            p*=nums[i];
            if (nums[i]==0 and flag==false){
                flag = true ;
                continue;
            }
            o*=nums[i];
        }
        for (int i = 0 ; i < int(nums.size()) ; ++i ){
            if (nums[i] == 0) out.push_back(o);
            else out.push_back(p/nums[i]);
        }
        return out;
    }
};