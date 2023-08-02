class Solution {
public:
    void back(vector<int>& nums,int start,vector<vector<int>>& main){
        if(start==nums.size()){ //0>=3 //1 //2 //3>=3
            main.push_back(nums);  //1,2,3
            return;
        }
        for(int i=start;i<nums.size();i++){ //0,1,2 //1,2 //2
            swap(nums[start],nums[i]); //1-1 //2-2 //3-3     //2-3     //2-1
            back(nums,start+1,main); //1,2,3 1 //1,2,3 2 //1,2,3 3     //1,3,2  3 //2,1,3  2
            swap(nums[start],nums[i]); //3-3 //2-2 //3-2
        }
    }
    vector<vector<int>> permute(vector<int>& nums) { //1,2,3
        vector<vector<int>>main; 
        back(nums,0,main); 
        return main;
    }
};


//Wrong
    //int len=nums.size();
    //int max=len*len;
    //generateSub(0,nums,main,sub,len,max);

    // void generateSub(int start,vector<int> &nums,vector<vector<int>>main, vector<int> &sub, int len, int max){
    //     if(max==main.size()){
    //         return;
    //     }
    //     if(len==sub.size()){
    //         main.push_back(sub);
    //         return;
    //     }
    //     for(int i=start;i<len;i++){
    //         sub.push_back(nums[i]);
    //         generateSub(start+1,nums,main,sub,len,max);
    //         sub.pop_back();
    //     }
    // }