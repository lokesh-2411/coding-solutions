class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i < j){
            int mid = (i + j) / 2;
            if(mid % 2 != 0){
                mid -= 1;
            }
            if(nums[mid] == nums[mid + 1]){
                i = mid + 2;
            }
            else{
                j = mid;
            }
        }
        return nums[i];
    }
};