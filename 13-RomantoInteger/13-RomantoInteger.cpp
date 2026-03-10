// Last updated: 3/11/2026, 12:42:31 AM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        // unordered_map<char,int> mp;
5        // if(s.size()!=t.size()) return false;
6        // for(char c:s) mp[c]++;
7        // for(char c:t){
8        //     mp[c]--;
9        //     if(mp[c]<0) return false;
10        // }
11        // return true;
12        if(s.size()!=t.size()) return false;
13        sort(s.begin(),s.end());
14        sort(t.begin(),t.end());
15        for(int i=0;i<s.size();i++) if(s[i]!=t[i]) return false;
16        return true;
17    }
18};