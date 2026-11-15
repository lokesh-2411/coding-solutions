class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int Mod = 1e9 + 7;
        long long Even = 1, Odd = 0, Ans = 0;
        int Chance = 0;

        for(int x : arr){
            Chance ^= (x & 1);
            if(Chance){
                Ans += Even;
                Odd++;
            }
            else{
                Ans += Odd;
                Even++;
            }
            Ans %= Mod;
        }
        return (int)Ans;
    }
};