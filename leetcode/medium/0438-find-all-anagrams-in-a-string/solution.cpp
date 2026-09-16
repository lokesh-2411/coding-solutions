class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int m = p.size();
        if(n < m) return ans;

        vector<int> freqP(26, 0), freqS(26, 0);

        for(char c : p) freqP[c - 'a']++;

        for(int i = 0 ; i < n ; i++){
            freqS[s[i] - 'a']++;

            if(i >= m){
                freqS[s[i - m] - 'a']--;
            }

            if(freqS == freqP){
                ans.push_back(i - m + 1);
            }
        }
        return ans;
    }
};