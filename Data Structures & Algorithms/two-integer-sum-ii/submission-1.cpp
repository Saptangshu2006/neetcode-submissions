class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(), numbers.end());
        int x = 0;
        int y = numbers.size() - 1;
        while(x < y) {
            int sum = numbers[x] + numbers[y];
            if(sum == target)
                return {x+1, y+1};
            else if(sum < target)
                x++;
            else
                y--;
        }
        return {};
    }
};
