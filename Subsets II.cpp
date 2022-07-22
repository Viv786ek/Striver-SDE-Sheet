class Solution {
public:
    set<vector<int>>s;
    void solve(int i,vector<int>&arr,int n,vector<int>&ans){
        if(i==n){
            s.insert(ans);
            return;
        }
        ans.push_back(arr[i]);
        solve(i+1,arr,n,ans);
        ans.pop_back();
        solve(i+1,arr,n,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int>ans;
        solve(0,nums,nums.size(),ans);
        for(auto num:s){
            res.push_back(num);
        }
        //sort(res.begin(),res.end());
        return res;
    }
};
