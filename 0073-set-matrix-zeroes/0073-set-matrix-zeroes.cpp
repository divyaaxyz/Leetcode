class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Brute- force
        //TC- mn + mn(m+n)
        //SC- 1
        // int m=matrix.size();
        // int n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             matrix[i][j]='a';
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]=='a'){
        //             matrix[i][j]=0;
        //             int r=i;
        //             for(int c=0;c<n;c++){
        //                 if(matrix[r][c]!='a'){
        //                    matrix[r][c]=0;
        //                 }
        //             }
        //             int c=j;
        //             for(int r=0;r<m;r++){
        //                 if(matrix[r][c]!='a'){
        //                    matrix[r][c]=0;
        //                 }
        //             }
        //         }
        //     }
        // }
        
        //Better
        //TC- 2mn
        //SC- m+n
        // int m=matrix.size();
        // int n=matrix[0].size();
        // int col[n]={0}; //m,n should be given 
        // int row[m]={0};
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             row[i]=1;
        //             col[j]=1;
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(row[i]==1 || col[j]==1){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        
        //Optimal
        //TC- 2mn
        //SC- 1
        int m=matrix.size();
        int n=matrix[0].size();
        int col0=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0; //
                    }
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};