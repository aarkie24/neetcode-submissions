class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        for(int val:nums){
            if(val>=target) return 1;
            sum+=val;
        }
        if(sum<target) return 0;
        else if(sum==target) return nums.size();

        int i=0,j=1,min = 10000000;
        sum=nums[0];int curr=1;
        while(i<j && j<nums.size()){
            if(sum<target){
                sum+=nums[j];
                j++;
                curr++;
                cout<< curr <<" inc " << sum<< "\n";
            }
            else{
                if(sum>=target){
                if(min>curr) min = curr;}
                sum-=nums[i];
                i++;
                curr--;
                
                if(sum>=target){
                if(min>curr) min = curr;}
                cout<< curr <<" here " << sum<< "\n";
            }
        }
        while(i<nums.size()){
            sum-=nums[i];
                i++;
                curr--;
                
                if(sum>=target){
                if(min>curr) min = curr;}
                cout<< curr <<" here " << sum<< "\n";
        }
        return min;
    }
};