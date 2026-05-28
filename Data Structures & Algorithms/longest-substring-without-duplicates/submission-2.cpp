class Solution {
    bool isunique(string s,int i,int j){
        for(int k=i;k<j;k++){
            if(s[k]==s[j]){return false;}
        }
        return true;
    }
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=1,max=0;
        if(s==""){
            return 0;
        }
        else if(s.length()==1){
            return 1;
        }
        while(i<=j && j<s.length()){
            if(isunique(s,i,j)){
                j++;
            }
            else{
                if(max<j-i){
                    max=j-i;
                }
                i++;
            }
        }
        if(max<j-i){
            max=j-i;
        }
        return max;
    }
};
