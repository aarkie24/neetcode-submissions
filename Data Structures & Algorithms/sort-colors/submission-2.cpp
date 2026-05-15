class Solution {
    void swap(int *n1,int *n2){
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1,k=0;
        while(k<=j){
            if(nums[k]==0){
                swap(&nums[k],&nums[i]);
                k++;
                i++;
            }
            else if(nums[k]==2){
                swap(&nums[k],&nums[j]);
                j--;
            }
            else{
                k++;
            }
        }
    }
};