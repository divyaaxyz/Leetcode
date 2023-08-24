class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>idx;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    idx.push_back(i);
                    idx.push_back(j);
                    return idx;
                }
            }
        }
        return idx;
    }
};