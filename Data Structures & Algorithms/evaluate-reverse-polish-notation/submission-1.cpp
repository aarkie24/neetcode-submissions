#include<cctype>
#include<stack>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> vals;
        for(string s:tokens){
            
            if (s == "+" || s == "-" || s == "*" || s == "/"){
                int val1 = vals.top();vals.pop();
                int val2 = vals.top();vals.pop();
                if(s=="+"){
                    vals.push(val1+val2);
                }
                else if(s=="-"){
                    vals.push(val2-val1);
                }
                else if(s=="*"){
                    vals.push(val1*val2);
                }
                else if(s=="/"){
                    vals.push(val2/val1);
                }
            }
            else{
                vals.push(stoi(s));
            }
        }
        return vals.top();
    }
};
