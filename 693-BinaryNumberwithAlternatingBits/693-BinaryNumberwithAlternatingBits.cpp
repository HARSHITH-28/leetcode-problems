// Last updated: 2/18/2026, 8:47:53 AM
1class Solution {
2public:
3    bool hasAlternatingBits(int n) {
4        string s=bitset<32>(n).to_string();
5        while(s[0]=='0') s.erase(0,1);
6        if(s[0]=='0'){
7            for(int i=2;i<s.size();i+=2) if(s[i]=='1') return false;
8            for(int i=1;i<s.size();i+=2) if(s[i]=='0') return false;
9        }
10        else{
11            for(int i=2;i<s.size();i+=2) if(s[i]=='0') return false;
12            for(int i=1;i<s.size();i+=2) if(s[i]=='1') return false;
13        }
14        return true;
15    }
16};