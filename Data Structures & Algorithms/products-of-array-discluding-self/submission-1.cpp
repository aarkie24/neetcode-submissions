class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out;
        int prod=1,p=1,zeros=0;
        for(int num:nums){
            prod*=num;
            if(num!=0) p*=num;
            else zeros++;
        }
        for(int num:nums){
            if(num!=0)
                out.push_back(prod/num);
            else
                out.push_back(zeros > 1 ? 0 : p);
        }
        return out;
    }
};
