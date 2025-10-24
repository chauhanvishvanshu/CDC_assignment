class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // two pointer approache
        int n= nums.size();
        int i=0,j=1;
        while(j<n){
            if(nums[i]!=nums[j]){  // unique element find
                i++; // first i increase 
                nums[i]=nums[j];
            }
            j++;
        }
        return (i+1); //number of unique elements 
    }
};