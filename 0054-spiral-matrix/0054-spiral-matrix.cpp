class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        if (matrix.empty()) return result;

        int n = matrix.size();       // rows
        int m = matrix[0].size();    // columns

        int srow = 0, scol = 0;
        int erow = n - 1, ecol = m - 1;

        while (srow <= erow && scol <= ecol) {
            // top row
            for (int j = scol; j <= ecol; ++j)
                result.push_back(matrix[srow][j]);

            // right column
            for (int i = srow + 1; i <= erow; ++i)
                result.push_back(matrix[i][ecol]);

            // bottom row
            if (srow < erow) {
                for (int j = ecol - 1; j >= scol; --j)
                    result.push_back(matrix[erow][j]);
            }

            // left column
            if (scol < ecol) {
                for (int i = erow - 1; i > srow; --i)
                    result.push_back(matrix[i][scol]);
            }

            // move to inner layer
            srow++;
            scol++;
            erow--;
            ecol--;
        }

        return result;
    }
};
