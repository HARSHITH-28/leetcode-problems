// Last updated: 5/8/2026, 7:47:54 AM
1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int n=word1.size(),m=word2.size();
5        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
6        for(int i=0;i<=n;i++) dp[i][0]=i;
7        for(int j=0;j<=m;j++) dp[0][j]=j;
8        for(int i=1;i<=n;i++){
9            for(int j=1;j<=m;j++){
10                if(word1[i-1]==word2[j-1]) dp[i][j]=dp[i-1][j-1];
11                else dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
12            }
13        }
14        return dp[n][m];
15    }
16};