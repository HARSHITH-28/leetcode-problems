// Last updated: 4/17/2026, 4:28:34 PM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int res=0;
5        unordered_map<int,int> mp;
6        int sum=0;
7        mp[0]=1;
8        for(int i=0;i<nums.size();i++){
9            sum+=nums[i];
10            if(mp.find(sum-k)!=mp.end()) res+=mp[sum-k];
11            mp[sum]++;
12        }
13        return res;
14    }
15};