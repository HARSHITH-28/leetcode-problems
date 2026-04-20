// Last updated: 4/20/2026, 11:20:56 AM
1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int res=-1;
5        for(int i=0;i<colors.size();i++){
6            for(int j=0;j<colors.size();j++){
7                if(colors[i]!=colors[j]){
8                    res=max(res,abs(i-j));
9                }
10            }
11        }
12        return res;
13    }
14};