class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Brute force
        //TC=O(n*n)
        //SC=O(1)
        // vector<int>idx;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             idx.push_back(i);
        //             idx.push_back(j);
        //             return idx;
        //         }
        //     }
        // }
        // return {-1,-1};
        
        //Optimal
        //SC=O(n)
        //TC=O(n * logn)
        map<int,int>mpp; //map data structure - element, index store
        int n=nums.size();
        for(int i=0;i<n;i++){
            int first=nums[i]; //first element
            int sec=target-first; //what second element should be
            if(mpp.find(sec)!=mpp.end()){ //finding second element in map till end- if point to end then didn't find
                return {mpp[sec],i}; //second index return= mpp[sec], first index
            }
            mpp[first]=i;//if not in map, put the first element we took- in map
        }
        return {-1,-1};
    }
};