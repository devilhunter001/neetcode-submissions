class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int size = matrix.size() * matrix[0].size();
        int start  = 0 ;
        int end = size - 1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(matrix[mid / matrix[0].size()][mid % matrix[0].size()] > target){
                end = mid - 1;
            }
            else if(matrix[mid / matrix[0].size()][mid % matrix[0].size()] < target){
                start = mid + 1;
            }
            else{
                return true;
            }
        }
    return false;
    }
};
