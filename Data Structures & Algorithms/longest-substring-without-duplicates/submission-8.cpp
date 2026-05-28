class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 1;
        bool isExist[300] = {false};
        int len = s.length();

        if (len == 0)   return 0;
        if (len == 1)   return 1;

        int ans = 0, cnt = 0;
        isExist[s[start] - 0] = true;
        cnt++;
        ans = cnt;

        while (end < len) {
            if (start == end) {
                cnt = 1;
                isExist[s[start] - 0] = true;
                end++;
            } else if (!isExist[s[end] - 0]) {
                cnt++;
                isExist[s[end] - 0] = true;
                if (ans < cnt)  ans = cnt;

                end++;
            } else {
                while (s[start] != s[end]) {
                    isExist[s[start] - 0] = false;
                    start++;
                }
                isExist[s[start] - 0] = false;

                start++;
                cnt = end - start;
            }
        }

        return ans;
    }
};