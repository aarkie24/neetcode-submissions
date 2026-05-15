class Solution {
    bool isPalindrome(string s,int skip) {
        int i=0,j=s.length()-1;
        while(i<=j){
            if(i==skip) i++;
            else if(j==skip) j--;
            else if(!isalnum(s[i])){
                i++;continue;
            }
            else if(!isalnum(s[j])){
                j--;continue;
            }
            else if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s,-1)){
            return true;
        }
        for(int i=0;i<s.length();i++){
            if(isPalindrome(s,i)){
                return true;
            }
        }
        return false;
    }
};