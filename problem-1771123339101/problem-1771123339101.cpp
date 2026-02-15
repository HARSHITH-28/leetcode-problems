// Last updated: 2/15/2026, 8:12:19 AM
1class Solution {
2public:
3    vector<int> toggleLightBulbs(vector<int>& bulbs) {
4        int n=bulbs.size();
5        unordered_map<int,int> mp;
6        for(int i=0;i<n;i++){
7            if(mp.find(bulbs[i])!=mp.end() and mp[bulbs[i]]==1) mp[bulbs[i]]=0;
8            else mp[bulbs[i]]=1;
9        }
10        vector<int> v;
11        for(auto it:mp) if(it.second) v.push_back(it.first);
12        sort(v.begin(),v.end());
13        return v;
14    }
15};