class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k > n
        vector<int> temp(k);

        // Step 1: Store the last k elements in a temporary array
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // Step 2: Shift the elements of nums to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        // Step 3: Place the temporary array elements at the start
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};


//one more using reverse function

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k > n

        // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};