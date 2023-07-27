class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][j]='a';
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='a'){
                    matrix[i][j]=0;
                    int r=i;
                    for(int c=0;c<n;c++){
                        if(matrix[r][c]!='a'){
                           matrix[r][c]=0;
                        }
                    }
                    int c=j;
                    for(int r=0;r<m;r++){
                        if(matrix[r][c]!='a'){
                           matrix[r][c]=0;
                        }
                    }
                }
            }
        }
    }
};