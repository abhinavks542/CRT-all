#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Total sum from 0 to n
        int total = n * (n + 1) / 2;

        // Step 2: Array sum
        int sum = 0;

        for(int num : nums) {
            sum += num;
        }

        // Step 3: Missing number
        return total - sum;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {3,0,1};

    cout << obj.missingNumber(nums);

    return 0;
}