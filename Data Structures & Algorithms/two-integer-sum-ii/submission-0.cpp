class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> solution={0,0};
        for(int i=0;i<numbers.size()-1;i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                    solution[0] = i+1;
                    solution[1] = j+1;
                    return solution;
                }
            }
        }
        return solution;
    }
};
