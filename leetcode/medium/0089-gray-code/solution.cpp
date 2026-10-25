class Solution {
public:
    vector<int> grayCode(int n) {
        int shinyu = 1 << n;
        vector<int> arr;

        for(int i = 0 ; i < shinyu ; i++){
            arr.push_back(i ^ (i >> 1));
        }

        return arr;
    }
};                      