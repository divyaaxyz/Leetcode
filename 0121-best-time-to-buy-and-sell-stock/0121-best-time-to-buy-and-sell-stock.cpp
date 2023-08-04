class Solution {
public:
    int maxProfit(vector<int>& prices) { //7,1,5,3,6,4
        //Brute force --- TLE
        //TC= O(n^2)
        //SC=O(1)
        // int n=prices.size();
        // int diff=0;
        // int maxDiff=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){   
        //         if(prices[j]>prices[i]){
        //            diff=prices[j]-prices[i];
        //         }
        //         maxDiff=max(diff,maxDiff);
        //     }  
        // }
        // return maxDiff;
        
        //Optimal--- DP
        //TC= O(n)
        //SC=O(1)
        int profit=0;
        int sell=prices[0]; //7
        for(int i=1;i<prices.size();i++){ //1 //2
            int cost=prices[i]-sell; //6-7= -1 //4-6=-2 //3-4 //1-3
            profit=max(profit,cost); //0
            sell=min(sell,prices[i]); //6 //4
        }
        return profit;        //0
    }
};
