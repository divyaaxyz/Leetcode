class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Brute force
        //TC=O(n*n)
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int cnt=1;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]) cnt++;
        //     }
        //     if(cnt>(n/2)) return nums[i];
        // }
        // return -1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};