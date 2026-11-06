class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for (const string& word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            anagramMap[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto& entry : anagramMap) {
            result.push_back(move(entry.second));
        }

        return result;
    }
};