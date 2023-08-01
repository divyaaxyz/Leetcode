
class Solution {
public:
    //TC: r*n*n
    //Brute Force
    int nCr(int n,int r){
        long long res=1;
        for(int i=0;i<r;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;
    }
    vector<vector<int>>generate(int numRows){
        vector<vector<int>>ans;
        for(int row=1;row<=numRows;row++){
            vector<int>templist;
            for(int col=1;col<=row;col++){
                templist.push_back(nCr(row-1,col-1));
            }
            ans.push_back(templist);
        }
        return ans;
    }
    //Optimal approach
    //TC: n*n
    // vector<int>generateRow(int row){
    //     long long ans=1;
    //     vector<int>ansRow;
    //     ansRow.push_back(1);
    //     for(int col=1;col<row;col++){
    //         ans=ans*(row-col);
    //         ans=ans/col;
    //         ansRow.push_back(ans);
    //     }
    //     return ansRow;
    // }
    // vector<vector<int>> generate(int numRows) {
    //     vector<vector<int>>ans;
    //     for(int i=1;i<=numRows;i++){
    //         ans.push_back(generateRow(i));
    //     }
    //     return ans;
    // }
};