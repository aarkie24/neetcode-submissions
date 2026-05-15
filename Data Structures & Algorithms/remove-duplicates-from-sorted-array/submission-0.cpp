#include<vector>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int unique=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[unique] = nums[i];
                unique++;
            }

        }
        return unique;
    }
};