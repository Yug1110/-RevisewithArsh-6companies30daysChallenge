class Solution{   
public:
    
    void reverse(string &ans, int start, int end){
        while(start<end){
            char temp=ans[start];
            ans[start]=ans[end];
            ans[end]=temp;
            start++;
            end--;
        }
        
        // cout<<ans<<endl;
    }

    string printMinNumberForPattern(string S){
        // code here 
        string ans="";
        int n=S.length();
        for(int i=1;i<=n+1;i++){
            ans+=to_string(i);
        }
        
        int ind=0;
        while(ind<n){
            if(S[ind]=='D'){
                int start=ind;
                int end;
                while(ind<n && S[ind]=='D'){
                    end=ind+1;
                    ind++;
                }
                // cout<<start<<" "<<end<<endl;
                if(ind==n){
                    end=n;
                }
                reverse(ans, start, end);
                
            }
            else{
                ind++;
            }
        }
        return ans;
    }
    
};
