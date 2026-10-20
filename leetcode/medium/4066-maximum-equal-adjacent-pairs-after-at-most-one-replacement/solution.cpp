class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        vector<int> shinyu = nums;
        int n = shinyu.size();

        int okay = 0;
        map<pair<int, int>, int> cnt;

        for(int i = 0 ; i < n - 1 ; i++){
            int a = shinyu[i];
            int b = shinyu[i + 1];

            if(a == b) okay++;
            else{
                int low = min(a, b);
                int high = max(a, b);
                cnt[{low, high}]++;
            }
        }

        int best = 0;
        for(auto& [key, c] : cnt){
            best = max(best, c);
        }

        return okay + best;
    }
};