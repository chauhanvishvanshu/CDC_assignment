class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int start = 0 , sum = 0;
        int ans_start = 0 , ans_end = 0;

        for(int i=0; i<nums.size(); i++) {
            if(sum == 0) start = i; // if sum is zero than new maxsumsubarray start from i 

            sum+=nums[i];  // calculating sum

            if( sum>max_sum ) {   // compare with max sum 
                max_sum = sum;
                ans_starat = start; 
                ans_end = i; // if max sum found than maxsub array sum end here 
            }

            if(sum<0) sum=0; //kadanes algo if sum in minus than zero
        }
        return max_sum;
        // if retrurn actual sub array 
        // return vector<int>(nums.begin() + ans_start, nums.begin() + ans_end + 1);
    }
};