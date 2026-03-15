// Last updated: 3/15/2026, 8:12:02 AM
1class Solution {
2public:
3    int countCommas(int n) {
4        if(n<1000) return 0;
5        if(n==100000) return n-1000+1;
6        string s=to_string(n);
7        int comm=s.size()/3;
8        return comm*(n-1000)+1;
9    }
10};