// Last updated: 4/18/2026, 10:37:52 AM
1class Solution {
2public:
3    int mirrorDistance(int n) {
4        string rev=to_string(n);
5        reverse(rev.begin(),rev.end());
6        return abs(n-stoi(rev));
7    }
8};