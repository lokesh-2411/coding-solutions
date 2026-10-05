class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int> okay;
        int ans = 0;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                okay.push_back(ans);
                ans = 0;
            }
            else{
                ans = okay[okay.size() - 1] + max(2 * ans, 1);
                okay.pop_back();
            }
        }

        return ans;
        
    }
};