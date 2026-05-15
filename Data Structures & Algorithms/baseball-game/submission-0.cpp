#include<vector>
#include<string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vec;
        int idx = 0;
        for(string val:operations){
            if(val=="+"){
                vec.push_back(vec[idx-1]+vec[idx-2]);
                idx++;
            }
            else if(val == "C"){
                vec.pop_back();
                idx--;
            }
            else if(val == "D"){
                vec.push_back(2*vec[idx-1]);
                idx++;
            }
            else{
                vec.push_back(stoi(val));
                idx++;
            }
        }
        int sum=0;
        for(int i:vec){
            sum+=i;
        }
        return sum;
    }
};