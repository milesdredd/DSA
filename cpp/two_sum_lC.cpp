#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {  // Fix loop initialization
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Fix missing semicolon
                }       
            }
        }
        return {}; // Return empty vector if no solution found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,6142,8192,10239};
    int target = 18431;
    
    vector<int> result = sol.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}

