string longestSubstring(string s, int n) {
        // code here
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=1;
                    if(i-1>=0 && j-1>=0 && j-i>=1+dp[i-1][j-1])
                        dp[i][j]=1+dp[i-1][j-1];
                }
            }
        }
        int ind=-1,curr_mx=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(dp[i][j]>curr_mx)
                {   
                    ind=i;
                    curr_mx=dp[i][j];
                }
            }
        }
        if(ind==-1)
        {
            return "-1";
        }
        else
        {
            string ans="";
            for(int i=ind-curr_mx+1;i<=ind;i++)
            {
                ans+=s[i];
            }
            return ans;
        }
        
    }