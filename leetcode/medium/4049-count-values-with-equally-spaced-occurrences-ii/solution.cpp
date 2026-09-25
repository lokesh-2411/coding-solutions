class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int> shinyu = nums;

        int count = 0;
        unordered_map<int, vector<int>> indicesmap;

        int n = shinyu.size();
        for(int i = 0 ; i < n ; i++){
            indicesmap[shinyu[i]].push_back(i);
        }

        for(auto &p : indicesmap){
            vector<int> indices = p.second;
            if(indices.size() < 3) continue;

            int gap = indices[1] - indices[0];
            bool okay = true;
            for(int i = 2 ; i < (int)indices.size() ; i++){
                if(indices[i] - indices[i - 1] != gap){
                    okay = false;
                    break;
                }
            }
            if(okay) count++;
        }
        return count;
    }
};