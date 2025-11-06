class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int left = 0;
        for(int x:nums) total+=x;

        for(int i = 0; i<nums.size();i++){

            if(left == total-left-nums[i]){ //check left sum = right sum , excluding current element that is nums[i]
                return i;
            }

            left+=nums[i];
        }
       return -1;
    }
};


//cleaner code 

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int left = 0;
        for(int x:nums) total+=x;

        for(int i = 0; i<nums.size();  left+=nums[i++]) //left sum and i++
            if(left == total-left-nums[i]) //check left sum = right sum , excluding current element that is nums[i]
                return i;
       return -1;
    }
};
