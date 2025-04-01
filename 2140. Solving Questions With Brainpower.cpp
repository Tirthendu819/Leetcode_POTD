class Solution {
public:

    long long solve(vector<vector<int>>& questions,int i,vector<long long>&dp,int n)
    {
        if(i>=n)
        return 0;

        if(dp[i]!=-1)
        {
            return dp[i];
        }
        long long taken=questions[i][0]+solve(questions,i+questions[i][1]+1,dp,n);
        long long nottaken=solve(questions,i+1,dp,n);

        return dp[i]=max(taken,nottaken);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>dp(n+1,-1);
        return solve(questions,0,dp,n);
    }
};

