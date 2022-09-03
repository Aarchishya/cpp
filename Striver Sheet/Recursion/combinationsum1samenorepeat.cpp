class Solution {
    public:
    void help(int i,int target,vector<int>&candidates,vector<int>&ds,vector<vector<int>>&ans)
    {
        int n=candidates.size();
        if(i==n)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
         return;   
        }
        if(target>=candidates[i])
        {
        ds.push_back(candidates[i]);
        help(i,target-candidates[i],candidates,ds,ans);
            ds.pop_back();
        }
        help(i+1,target,candidates,ds,ans);
        
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        help(0,target,candidates,ds,ans);
        return ans;
        
    }
};
