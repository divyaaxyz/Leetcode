class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Brute-force------ TLE
        //TC = O(n^3)
        //SC = O(1)
        // int n=nums.size(); //5
        // int maxi=INT_MIN;
        // for(int i=0;i<n;i++){ //0,1,2,3,4
        //     for(int j=i;j<n;j++){ //0,1,2,3,4
        //         int sum=0;
        //         for(int k=i;k<=j;k++){ //0,0 0,1 
        //             sum+=nums[k];
        //         }
        //         maxi=max(sum,maxi);
        //     }
        // }
        // return maxi;
        
        //Better ------- TLE
        //TC= O(n^2)
        //SC=O(1)
        /*int n=nums.size(); //5
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){ //0,1,2,3,4
            int sum=0;
            for(int j=i;j<n;j++){ //0,1,2,3,4
                sum+=nums[j];
                maxi=max(sum,maxi);
            }
            
        }
        return maxi; */  
        
        //Optimal 
        //Kadane's algo
        //SC=O(n)
        //TC=O(1)
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
            }
            
        }
        return maxi;       
    }
};