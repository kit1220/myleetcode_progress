class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = int(numbers.size()) - 1;
        while(!(numbers[left] + numbers[right] == target)){
            if (numbers[left] + numbers[right] > target ) {
                right--;
                continue;
            }
               
            if (numbers[left] + numbers[right] < target ){
                left++;
                continue;
            } 
        }
        vector<int> v = {left+1,right+1};
        return v;
    }
};