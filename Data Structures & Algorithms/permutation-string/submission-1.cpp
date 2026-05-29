class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        array<int,26> freqS1 = {0};
        for(char i:s1){
            freqS1[i-'a']++;
        }
        
        for(int i=0;i<s2.length()-s1.length()+1;i++){
            array<int,26> freqS2 = {0};
            for(int j=i;j< i+s1.length();j++){
                freqS2[s2[j]-'a']++;
            }
            
            if(freqS1 == freqS2) return true;
        }
        return false;
    }
};
