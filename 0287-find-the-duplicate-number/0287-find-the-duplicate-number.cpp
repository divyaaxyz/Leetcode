class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Naive/Brute Force
        //TC= O(n log n)+ O(n)
        //SC=O(1)
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;
        
        //Better
        //TC=O(n)
        //SC=O(n)
        int n=nums.size(); //5
        //int freq[]={1}; //freq arr with n+1 digits initialized as 1 //error- ar sized object may not be initialized
        vector<int>freq;
        for(int i=0;i<n;i++){ 
            freq.push_back(1);
        }
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==1){
                freq[nums[i]]-=1;
            }
            else if(freq[nums[i]]==0){
                return nums[i];
            }
        }
        return -1;
    }
};