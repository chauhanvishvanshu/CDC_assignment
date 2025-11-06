// LeetCode: Maximum Product Subarray
// Time Complexity: O(n)
// Space Complexity: O(1)
// Idea: Track prefix and suffix products in one pass to handle negative numbers and zeros.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1, suff = 1;       // prefix and suffix products
        int ans = INT_MIN;            // stores the maximum product found so far
        int n = nums.size();

        // Traverse the array once from both ends
        for(int i = 0; i < n; i++) {
            // Reset prefix/suffix if they become zero
            // (since any subarray containing zero should start fresh)
            if(pre == 0) pre = 1;
            if(suff == 0) suff = 1;

            // Multiply current element in forward direction
            pre *= nums[i];

            // Multiply current element in backward direction
            suff *= nums[n - i - 1];

            // Update the answer with the maximum product found so far
            ans = max(ans, max(pre, suff));
        }

        // Return the maximum product of any subarray
        return ans;
    }
};
