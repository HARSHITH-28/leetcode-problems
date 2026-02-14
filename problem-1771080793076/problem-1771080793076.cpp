// Last updated: 2/14/2026, 8:23:13 PM
1class Solution {
2public:
3    string mapWordWeights(vector<string>& words, vector<int>& weights) {
4        string res;
5        unordered_map<char,int> mp;
6        int i=25;
7        for(char c='a';c<='z';c++) mp[i--]=c;
8        for(string s:words){
9            int w=0;
10            for(char c:s){
11                w+=weights[c-'a'];
12            }
13            res.push_back(mp[w%26]);
14        }
15        return res;
16    }
17};