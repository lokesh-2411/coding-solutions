class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        backtrack(s, 0, 0, n, ans);
        return ans;
    }

    void backtrack(string &s, int open, int close, int n, vector<string> &ans){
        if(s.size() == 2 * n){
            ans.push_back(s);
            return;
        }
        if(open < n){
            s.push_back('(');
            backtrack(s, open + 1, close, n, ans);
            s.pop_back();
        }
        if(close < open){
            s.push_back(')');
            backtrack(s, open, close + 1, n, ans);
            s.pop_back();
        }
    }
};