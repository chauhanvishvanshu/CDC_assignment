//intersection -- 
//two pointer -- 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

       int i =0;  int j=0;
       int n1 = nums1.size(); int n2 = nums2.size();

       vector<int> ans;

       while( i<n1 && j<n2 ){

        if(nums1[i]<nums2[j])   i++;

        else if(nums1[i]>nums2[j])  j++;

        else{
            if(ans.empty()||ans.back()!=nums1[i])   ans.push_back(nums1[i]);
            
            i++;
            j++;
        }
       } 
       return ans;
    }
};


//unordered_map


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2 = nums2.size();
        vector<int>arr;
        unordered_map<int,int>mpp1;
        for(int i=0; i<n1; i++){
mpp1[nums1[i]]=1;

        }
        for(int i=0; i<n2; i++){
           if(mpp1.find(nums2[i])!=mpp1.end()){
            arr.push_back(nums2[i]);
            mpp1.erase(nums2[i]);
           }
        }
       return arr;
    }
};


//using unordered set

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> ans;

        for (int num : nums2) {
            if (s1.count(num)) ans.insert(num);
        }

        return vector<int>(ans.begin(), ans.end());
    }
};



