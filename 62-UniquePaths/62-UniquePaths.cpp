// Last updated: 3/3/2026, 12:51:42 PM
1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        vector<vector<int>> v(m,vector<int>(n,1));
5        for(int i=1;i<m;i++){
6            for(int j=1;j<n;j++){
7                v[i][j]=v[i][j-1]+v[i-1][j];
8            }
9        }
10        return v[m-1][n-1];
11    }
12};