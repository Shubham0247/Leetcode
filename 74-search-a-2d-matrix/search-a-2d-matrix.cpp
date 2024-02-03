class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m*n-1;
        while(left <= right) {
            int mid = left + (right-left)/2;
            int midNum = matrix[mid/n][mid%n];
            if (target==midNum) return true;
            else if (target < midNum) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};