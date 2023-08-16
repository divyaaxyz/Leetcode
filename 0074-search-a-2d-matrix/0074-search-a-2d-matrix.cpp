class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Brute force
        //TC=O(m*n)
        //SC=O(1)
        // int m=matrix.size(),n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;   
        
        //Optimal
        //TC=O(log (m*n))
        //SC=O(1)
        int m=matrix.size(),n=matrix[0].size();
        int low=0,high=(m*n)-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};