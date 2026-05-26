class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);

        for(int i=0;i<temperatures.size()-1;i++){
            int curr=1;
            bool found = false;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[i]<temperatures[j]){
                    found = true;
                    result[i] = curr;
                    break;
                }
                curr++;
            }
            if(!found){
                result[i] = 0;
            }
        }
        result[temperatures.size()-1] = 0;

        return result;
    }
};
