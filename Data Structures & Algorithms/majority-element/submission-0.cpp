#include<unordered_map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        unordered_map <int,int> freq;
    for(int i:nums){
        freq[i]++;
    }
    for(auto i:nums){
        if(freq[i]>nums.size()/2){
            return i;
        }
    }
    return 0;
    }
};