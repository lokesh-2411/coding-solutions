class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> ends;
        ends.reserve(n);
        for(auto& q : intervals) ends.push_back(q[1]);
        sort(ends.begin(), ends.end());

        long long okay = 0;
        for(auto& q : intervals){
            okay += lower_bound(ends.begin(), ends.end(), q[0]) - ends.begin();
        }

        return (long long)n * (n - 1) / 2 - okay;
    }
};