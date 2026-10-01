#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int size = n1 + n2;

        vector<int> result(size);

        int i = 0, j = 0, k = 0;

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                result[k++] = nums1[i++];
            } else {
                result[k++] = nums2[j++];
            }
        }

        while (i < n1) {
            result[k++] = nums1[i++];
        }

        while (j < n2) {
            result[k++] = nums2[j++];
        }

        if (size % 2 != 0) {
            return static_cast<double>(result[size / 2]);
        } else {
            int mid = size / 2;
            return (static_cast<double>(result[mid]) + result[mid - 1]) / 2.0;
        }
    }
};