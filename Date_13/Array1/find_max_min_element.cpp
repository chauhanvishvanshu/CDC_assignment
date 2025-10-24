class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minI = 0;
        int maxI=0;
        for(int i = 1; i <n; i++){

            if(nums[i]<nums[minI])  {  minI = i;  }
            if(nums[i]>nums[maxI])  {  maxI = i; }

        }
        if(minI>maxI){ swap(minI,maxI); }

        int front = maxI+1;
        int back = n-minI;
        int both = (minI+1) + (n-maxI);
        return min({front,back,both});
    }
};