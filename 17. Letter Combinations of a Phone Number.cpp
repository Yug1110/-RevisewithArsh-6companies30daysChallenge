class Solution {
public:

    void solve(string &digits, vector<string>&ref, vector<string>&ans, int n, int ind, string res){
        if(ind>=n){
            ans.push_back(res);
            return;
        }

        int x= digits[ind]-'0';
        cout<<digits[ind]<<endl;
        x-=2;

        for(int i=0;i< ref[x].length();i++){
            solve(digits, ref, ans, n, ind+1, res+ref[x][i]);
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> ref = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        string res="";
        vector<string>ans;

        int n=digits.length();
        if(n==0){
            return ans;
        }

        solve(digits, ref, ans, n, 0, res);

        return ans;
    }
};
