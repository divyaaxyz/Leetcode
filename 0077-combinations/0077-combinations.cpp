class Solution {
public:
    //BACKTRACKING
    void generateSubset(int start, int end, int k, vector<vector<int>> &sub, vector<int> &curr){
        if(end==0){
            return;
        }
        if(curr.size()==k){ //condition till k=2 (0==2) (1==2) (2==2)
            sub.push_back(curr); //copy curr list inside subset list //1,2 //1,3 //2,3
            return; //since do not want to search more after k combination of elements
        }
        for(int i=start;i<=end;i++){ //1 to 3 //2 to 3
            curr.push_back(i); //1 //2 ----// 3---- //2 //3
            generateSubset(i+1,end,k,sub,curr); //2 to 3 //3 to 3 //3 to 3 //4 to 3
            curr.pop_back(); //2 //3  //3
        }
    }
    
    vector<vector<int>> combine(int n, int k) { //n=3 (1,2,3) 1,2 1,3 2,3 //k=2
        vector<vector<int>>sub;
        vector<int>curr;
        generateSubset(1,n,k,sub,curr);  
        return sub;
    }
};