#include<stack>
#include<vector>
class Solution {
public:
    bool isValid(string val) {
        stack<char> s;
        for(char c:val){
            if(c=='[' || c=='(' || c=='{'){
                s.push(c);
            }
            else if(s.empty()) return false;
            else if(c=='}'){
                char a = s.top();
                s.pop();
                if(a!='{') return false;
            }
            else if(c==')'){
                char a = s.top();
                s.pop();
                if(a!='(') return false;
            }
            else if(c==']'){
                char a = s.top();
                s.pop();
                if(a!='[') return false;
            }
        }
        if(!s.empty()) return false;
        return true;
    }
};
