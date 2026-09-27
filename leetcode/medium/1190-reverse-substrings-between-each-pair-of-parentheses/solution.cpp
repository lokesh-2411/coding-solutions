class Solution {
public:
    string reverseParentheses(string s) {
        vector<char> okay;
        for(char ch : s){
            if(ch == ')'){
                vector<char> temp;
                while(!okay.empty() && okay.back() != '('){
                    temp.push_back(okay.back());
                    okay.pop_back();
                }
                if(!okay.empty()) okay.pop_back();
                for(char x : temp){
                    okay.push_back(x);
                }
            }
            else{
                okay.push_back(ch);
            }
        }
        return string(okay.begin(), okay.end());
    }
};