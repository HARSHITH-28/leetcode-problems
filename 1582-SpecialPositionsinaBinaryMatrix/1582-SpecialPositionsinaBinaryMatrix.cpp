// Last updated: 3/4/2026, 4:24:15 PM
1class Solution {
2public:
3    int numSpecial(vector<vector<int>>& mat) {
4        int n=mat.size(),m=mat[0].size();
5        vector<int> row(n,0),col(m,0);
6        for(int i=0;i<n;i++){
7            for(int j=0;j<m;j++){
8                if(mat[i][j]){
9                    row[i]++;
10                    col[j]++;
11                }
12            }
13        }
14        int res=0;
15        for(int i=0;i<n;i++){
16            for(int j=0;j<m;j++){
17                if(mat[i][j]==1 && row[i]==1 && col[j]==1) res++;
18            }
19        }
20        return res;
21    }
22};