class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int* mark = new int[nums.size() + 1]{};
        for (int num : nums) {
            if (num > 0 && num <= nums.size()) {
                mark[num] = 1;
            }
        }
        for (int i = 1; i < nums.size() + 1; i++) {
            if (mark[i] == 0) {
                return i;
            }
        }
        return nums.size() + 1;
    }
};