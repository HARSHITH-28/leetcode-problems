// Last updated: 4/19/2026, 12:52:01 PM
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int i,j,n=nums.size(),l,r;
5        vector<vector<int>> v;
6        sort(nums.begin(),nums.end());
7        for(i=0;i<n-3;i++){
8            if(i>0 && nums[i]==nums[i-1]) continue;
9            for(j=i+1;j<n-2;j++){
10                if(j>i+1 && nums[j]==nums[j-1]) continue;
11                l=j+1;
12                r=n-1;
13                while(l<r){
14                    long long sum=(long long)nums[l]+nums[r]+nums[i]+nums[j];
15                    if(sum==(long)target){
16                        v.push_back({nums[i],nums[j],nums[l],nums[r]});
17                        while(l<r && nums[l]==nums[l+1]) l++;
18                        while(l<r && nums[r]==nums[r-1]) r--;
19                        l++;
20                        r--;
21                    }
22                    else if(sum<(long)target) l++;
23                    else r--;
24                }
25            }
26        }
27        return v;
28    }
29};