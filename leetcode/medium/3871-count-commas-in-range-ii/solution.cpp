class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;
        long long temp = n;

        long long p = 1000;
        long long total = 0;
        int commas = 1;
        while(p <= n){
            long long next = p * 1000;
            long long end = (next > n + 1) ? n : next - 1;
            total += (long long)commas * (end - p + 1);
            p = next;
            commas++;
        }
        return total;
    }
};