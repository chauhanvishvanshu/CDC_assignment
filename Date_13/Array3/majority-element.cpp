class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, el;

        // Step 1: Find a candidate for the majority element
        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {           // If count is zero, pick current number as candidate
                el = nums[i];
                count++;
            }
            else if(nums[i] == el)     // Same as candidate → increment count
                count++;
            else                        // Different element → decrement count
                count--;
        }

        // Step 2: Verify if the candidate is actually the majority element
        int count1 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == el) count1++;
        }

        // Return candidate if it appears more than n/2 times, else return -1
        if(count1 > (nums.size() / 2)) return el;
        return -1;
    }
};
