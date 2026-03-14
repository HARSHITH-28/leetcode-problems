// Last updated: 3/14/2026, 8:03:18 PM
1class Solution {
2public:
3    int firstUniqueEven(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(int i:nums) mp[i]++;
6        for(int i=0;i<nums.size();i++){
7            if(nums[i]%2==0 and mp[nums[i]]==1) return nums[i];
8        }
9        return -1;
10    }
11};