  int tribonaccifunc(int n, vector<int> &dp) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;

        if(dp[n]!=-1) return dp[n];

        return dp[n]= tribonaccifunc(n-1, dp) + tribonaccifunc(n-2, dp) + tribonaccifunc(n-3, dp);
    }

    int tribonacci(int n){
        vector<int> dp(n+1, -1);
        return tribonaccifunc(n, dp);
    }