class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=1,max=0;
        int current = 0;
        bool exists[300] = {false};
        if(s==""){
            return 0;
        }
        else if(s.length()==1){
            return 1;
        }
        exists[s[i]-0] = true;
        current++;
        max= current;

        while(j<s.length()){
            if(i==j){
                current = 1;
                exists[s[i]-0] = true;
                j++;
            }
            else if(exists[s[j]-0]==false){
                current++;
                exists[s[j]-0] = true;
                j++;
                if(max<current){
                    max = current;
                }
            }
            else{
                while(s[i]!=s[j]){
                    exists[s[i]-0] = false;
                    i++;
                }
                exists[s[i]-0] = false;
                i++;
                current = j-i;
            }
        }
        return max;
    }
};
