class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> losscount;

        for(auto& m : matches){
            int winner = m[0];
            int loser = m[1];

            if(losscount.find(winner) == losscount.end()){
                losscount[winner] = 0;
            }

            losscount[loser]++;
        }

        vector<int> winners;
        vector<int> lossers;

        for(auto& [player, losses] : losscount){
            if(losses == 0){
                winners.push_back(player);
            }
            else if(losses == 1){
                lossers.push_back(player);
            }
        }

        return {winners, lossers};
    }
};