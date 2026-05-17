#include<unordered_map>
class Solution {
    unordered_map<int,int> freq;

    bool test(){
        for(auto f:freq){
            if(f.second>1) return true;
        }
        return false;
    }
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<=k;i++){
            freq[nums[i]] +=1;
        }
        if(test()) return true;

        for(int i=k+1;i<nums.size();i++){
            freq.erase(nums[i-k-1]);
            freq[nums[i]] += 1;
            if(test()) return true;
        }
        return false;

    }
};