class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";

        int n1 = num1.size(), n2 = num2.size();
        vector<int> result(n1 + n2, 0);

        for(int i = n1 - 1 ; i >= 0 ; i--){
            int digit1 = num1[i] - '0';
            for(int j = n2 - 1 ; j >= 0 ; j--){
                int digit2 = num2[j] - '0';
                int mul = digit1 * digit2;

                int p1 = i + j;
                int p2 = i + j + 1;
                int sum = mul + result[p2];

                result[p2] = sum % 10;
                result[p1] += sum / 10;
            }
        }

        int start = 0;
        while(start < (int)result.size() - 1 && result[start] == 0){
            start++;
        }

        string ans;
        for(int i = start ; i < (int)result.size() ; i++){
            ans += char('0' + result[i]);
        }

        return ans;
    }
};