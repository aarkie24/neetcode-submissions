#include<unordered_map>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k>nums.size()){
            k=nums.size();
        }
        unordered_map<int,int> last_seen{};
        for(int i=0;i<nums.size();i++){
            if(last_seen.count(nums[i])){
                if (abs(last_seen[nums[i]] - i )<=k){
                    return true;
                }
            }
            last_seen[nums[i]] = i;
        }
        return false;

    }
};