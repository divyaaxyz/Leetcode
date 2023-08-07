class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Brute-force 
        //TC= o(n*n)
        //SC= o(n*n)
        /*int n=matrix.size();
        vector<vector<int>> ans(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[j][n-1-i] = matrix[i][j];
                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ans[i][j];
            }
        }*/
        
        //Optimal
        //TC= o(n*n)
        //SC= o(1)
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};