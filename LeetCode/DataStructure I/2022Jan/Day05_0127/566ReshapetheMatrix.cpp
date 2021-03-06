//566. Reshape the Matrix
//My method
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m * n != r * c) {
            return mat;
        }

        vector<int> line(m*n);
        int num=0;
        for(int i=0; i<m;i++)
            for(int j=0; j<n;j++)
                line[num++]=mat[i][j];
        
        //reshape
        vector<vector<int>> ans(r, vector<int>(c, 0));
        num=0;
        for(int i=0; i<r;i++)
            for(int j=0; j<c;j++)
                ans[i][j]=line[num++];
        return ans;
    }
   
};
//need to think again.....by alexander
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int k = i * n + j;
                res[k / c][k % c] = mat[i][j];
            }
        }

        return res;
    }
   
};