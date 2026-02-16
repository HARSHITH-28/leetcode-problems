// Last updated: 2/16/2026, 11:16:42 PM
1class Solution {
2public:
3    int reverseBits(int n) {
4        string s=bitset<32>(n).to_string();
5        reverse(s.begin(),s.end());
6        int res=0;
7        int size=s.size();
8        for(int i=0;i<size;i++){
9            if(s[size-1-i]=='1'){
10                res+=pow(2,i);
11            }
12        }
13        return res;
14    }
15};