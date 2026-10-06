class Solution {
public:
    int minAddToMakeValid(string s) {
        int shinyu = 0;
        int okay = 0;
        for(char c : s){
            if(c == '('){
                okay++;
            }
            else{
                if(okay == 0){
                    shinyu++;
                }
                else{
                    okay--;
                }
            }
        }

        return shinyu + abs(okay);
    }
};