class Solution {
public:
    bool canAliceWin(int n) {
        int okay = 10;
        bool shinyu = 1;
        while(n >= okay){
            n -= okay;
            okay--;
            shinyu ^= 1;
        }
        return !shinyu;
    }
    
};