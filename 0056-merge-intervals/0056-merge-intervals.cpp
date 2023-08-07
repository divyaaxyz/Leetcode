class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //BruteForce
        //TC= o(nlogn + 2n)
        //SC= o(n)
        int m=intervals.size();
        //int n=intervals[0].size(); //n=2 //2 columns 
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<m;i++){
            int st=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<m;j++){
                if(end>=intervals[j][0]){
                    end=max(end,intervals[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({st,end});
        }
        return ans;     
    }
};