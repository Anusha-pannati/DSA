class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size()-1;
        int col = matrix[0].size()-1;
        int i = 0;
        while(i <= row && col >= 0)
        {
            if(target == matrix[i][col])
            {
                return true;
            }
            else if(matrix[i][col] < target)
            {
                i++;
            }
            else if( matrix[i][col]> target)
            {
                col--;
            }
        }
        return false;

    }
};