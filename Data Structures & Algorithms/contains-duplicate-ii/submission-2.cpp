class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if (nums[i] == nums[j]) return true;
            }
        }
        for(int i=k;i<nums.size();i++){
            for(int j=i-k;j<i;j++){
                if(nums[j]==nums[i]) return true;
            }
        }
        return false;
    }
};