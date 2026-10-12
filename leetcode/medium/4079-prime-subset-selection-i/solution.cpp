class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int> ans;
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        for(int i = 2 ; i * i <= n ; i++){
            if(prime[i]){
                for(int j = i * i ; j <= n ; j += i){
                    prime[j] = false;
                }
            }
        }

        long long target = s;
        for(int i = 2 ; i <= n ; i++){
            if(prime[i] && i <= target){
                ans.push_back(i);
                target -= i;
            }
        }

        return ans;
    }
};