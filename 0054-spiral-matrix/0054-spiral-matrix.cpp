class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int first_row = 0;
        int last_col = col-1;
        int last_row = rows - 1;
        int first_col = 0;
        vector<int> ans;
        int count = rows*col;

        while(count>0)
        {
            for(int i = first_col ; i <= last_col && count>0 ; i++)
            {
                ans.push_back(matrix[first_row][i]);
                count--;
            }
            first_row++;

            for(int j = first_row ; j <= last_row && count>0; j++ )
            {
                ans.push_back(matrix[j][last_col]);
                count--;
            }
            last_col--;

            for(int k = last_col ; k >= first_col && count>0; k--)
            {
                ans.push_back(matrix[last_row][k]);
                count--;
            }
            last_row--;

            for(int l = last_row; l >= first_row && count>0; l-- )
            {
                ans.push_back(matrix[l][first_col]);
                count--;
            }
            first_col++;
        }
        return ans;
    }
};