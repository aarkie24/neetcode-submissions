class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0,count =0;
        string final;
        while(i<word1.length() && j<word2.length()){
            if(count%2==0){
                final += word1[i++];
            }
            else{
                final += word2[j++];
            }
            count++;
        }
        while(i<word1.length()){
            final += word1[i++];
        }

        while(j<word2.length()){
            final+= word2[j++];
        }
        return final;
    }
};