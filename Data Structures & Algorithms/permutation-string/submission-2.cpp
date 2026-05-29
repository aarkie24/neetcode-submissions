class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()< s1.length()) return false;

        array<int,26> freqS1 = {0};
        array<int,26> freqS2 = {0};
        for(char i:s1){
            freqS1[i-'a']++;
        }
        for(int j=0;j< s1.length();j++){
                freqS2[s2[j]-'a']++;
        }
        if(freqS1 == freqS2) return true;

        for(int i=1;i<s2.length()-s1.length()+1;i++){
            freqS2[s2[i-1]-'a']--;
            freqS2[s2[i+s1.length()-1]-'a']++;
            
            if(freqS1 == freqS2) return true;
        }
        return false;
    }
};
