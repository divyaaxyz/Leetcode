class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Naive----- TLE
        //TC=O(n*n*n)
        //SC=O(1)
        // int n=nums.size(); //4
        // int mxm=INT_MIN;
        // for(int i=0;i<n;i++){ //0
        //     for(int j=i;j<n;j++){ //0 1 2
        //         int pdt=1;
        //         for(int k=i;k<=j;k++){ //0 //0 1 //0 1 2
        //             pdt*=nums[k]; //pdt=2 //6 //-12
        //         }
        //         mxm=max(mxm,pdt); //mxm=2 //6
        //     }
        // }
        // return mxm;
        
        //Better----- TLE
        //TC=O(n*n)
        //SC=O(1)
        // int n=nums.size();
        // int mxm=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int pdt=1;
        //     for(int j=i;j<n;j++){
        //         pdt*=nums[j];
        //         mxm=max(mxm,pdt);
        //     }
        // }
        // return mxm;
        
        //Optimal
        //TC=O(n)
        //SC=O(1)
        // int n=nums.size();
        // int pre=1,suf=1,mxm=INT_MIN;
        // for(int i=0;i<n;i++){
        //     if(pre==0) pre=1;
        //     if(suf==0) suf=1;
        //     pre=pre*nums[i];
        //     suf=suf*nums[n-i-1];
        //     mxm=max(mxm,max(pre,suf));
        // }
        // return mxm;
        
        //Kadane's algo
        int p1=nums[0],p2=nums[0],ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int tmp=max({nums[i],p1*nums[i],p2*nums[i]});
            p2=min({nums[i],p1*nums[i],p2*nums[i]});
            p1=tmp;
            ans=max(ans,p1);
        }
        return ans;
    }
};