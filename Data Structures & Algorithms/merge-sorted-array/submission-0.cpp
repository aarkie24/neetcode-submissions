#include<vector>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = 0,j=0;
        while(idx<m+n && j<n){
            if(idx >= m + j || nums1[idx]>nums2[j]){
                nums1.insert(nums1.begin()+idx,nums2[j++]);
                nums1.pop_back();
            }
            idx++;
        }
    }
};