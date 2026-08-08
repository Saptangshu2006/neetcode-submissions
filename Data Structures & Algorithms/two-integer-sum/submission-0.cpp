class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum = {};
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i]+nums[j] == target){
                    sum.insert(sum.begin(), i);
                    sum.insert(sum.begin() + 1, j);
                    return sum;
                }
            }
        }
        return {};
    }
};
