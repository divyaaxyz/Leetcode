class Solution {
public:
    void sortColors(vector<int>& nums) {
        //time--- O(n)----- 2 passes
        //space--- O(1) ----3 var
        // int count0=0,count1=0,count2=0;
        // for(int i=0;i<size(nums);i++){
        //     if(nums[i]==0){
        //         count0++;
        //     }
        //     else if(nums[i]==1){
        //         count1++;
        //     }
        //     else{
        //         count2++;
        //     }
        // }
        // for(int i=0;i<size(nums);i++){
        //     if(count0-->0){
        //         nums[i]=0;
        //     }
        //     else if(count1-->0){
        //         nums[i]=1;
        //     }
        //     else{
        //         nums[i]=2;
        //     }
        // }
        
        
        //single pass 
        //dutch national flag algo = 3 way partitioning
        int low=0,mid=0,high=size(nums)-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};