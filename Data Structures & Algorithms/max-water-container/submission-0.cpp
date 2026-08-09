#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int area = 0;
        int x = 0;
        int y = heights.size() - 1;
        while (x < y) {
            if(heights[x] == heights[y]) {
                area = (y - x) * min(heights[x], heights[y]);
                max = std::max(max, area);
                x++;
            }
            else if(heights[x] > heights[y]) {
                area = (y-x) * min(heights[x], heights[y]);
                max = std::max(max, area);
                y--;
            }
            else {
                area = (y-x) * min(heights[x], heights[y]);
                max = std::max(max, area);
                x++;
            }
        }
        return max;
    }
};
