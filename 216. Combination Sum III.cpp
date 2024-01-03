class Solution {
public:
    void solve(set<vector<int>>&ans, int k, int n, int value, vector<int> curr, int sum){
        if(sum==n){
            if(curr.size()==k) ans.insert(curr);
            
            return;
        }
        if(curr.size()==k){
            return;
        }
        if(value > 9) return;

        for(int i=value; i<=9;i++){
            if(i+sum > n){
                break;
            }
            else{
                curr.push_back(i);
                solve(ans, k, n, i+1, curr, sum+i);
                curr.pop_back();
                solve(ans, k, n, i+1, curr, sum);
            }
        }

        
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v={1,2,3,4,5,6,7,8,9};
        set<vector<int>>ans;
        vector<int>curr;

        solve(ans, k, n, 1, curr, 0);

        vector<vector<int>>res;

        for(auto it:ans){
            res.push_back(it);
        }
        return res;

        
    }
};
