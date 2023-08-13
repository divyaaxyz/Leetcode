class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
        int len=m+n; //6
        
        for(int i=0;i<n;i++){ //2nd arr traverse
            nums1[--len]=nums2[i]; //5->0 //4->1 //3->2
        }
        //sort(nums1, m+n); //
        sort(nums1.begin(),nums1.end());
        
        // if(n==0){
        //     return;
        // }
        // if(m==0){
        //     for(int i=0;i<n;i++){
        //         nums1[i]=nums2[i];
        //     }
        //     return;
        // }
        // int len=m+n; //6 //2
        // int idx1=0,idx2=0;
        // int ptr1=nums1[0],ptr2=nums2[0]; //1 2 //1 2
        // int i=0;
        // for(;i<m;i++){ // 0,1,2 //0
        //     if(ptr1<=ptr2){ //1<=2 //2<=2 //1<=2
        //         ptr1=nums1[++idx1]; //2 //3 //ptr1=0 idx=1
        //     }
        //     else{
        //         // for(int j=i;j<len-1;j++){ //2->5
        //         //     nums1[j+1]=nums1[j]; //3-2 //4-3 //5-
        //         // }
        //         for(int j=len-2;j>=i;j--){ //4 //3 //2
        //             nums1[j+1]=nums1[j]; 
        //         }
        //         nums1[i]=ptr2; //
        //         ptr2=nums2[++idx2];
        //     }
        // }
        // if(nums1[i]!=0){
        //     i++;
        // }
        // for(int j=i;j<len;j++){ //
        //     nums1[j]=nums2[idx2++];
        // }
    }
};