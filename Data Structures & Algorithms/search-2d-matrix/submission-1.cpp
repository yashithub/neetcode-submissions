class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(auto it : matrix){
        //     if (binary_search(it.begin(), it.end(), target)) return true;
        // }
        // return false;
        int r = matrix.size(), c = matrix[0].size();
        int l = 0, rt = r*c - 1;
        while(l <= rt){
            int mid = l + (rt - l)/2;
            int val = matrix[mid/c][mid%c];
            if (val == target) return true;
            else if (val > target) rt = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};
