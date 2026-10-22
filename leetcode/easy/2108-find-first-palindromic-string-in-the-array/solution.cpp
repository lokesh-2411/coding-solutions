class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const string& w : words) {
            string r(w.rbegin(), w.rend());
            if (w == r) return w;
        }
        return "";
    }
};