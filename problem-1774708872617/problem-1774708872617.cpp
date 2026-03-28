// Last updated: 3/28/2026, 8:11:12 PM
1class Solution {
2public:
3    int minAbsoluteDifference(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> v1,v2;
6        for(int i=0;i<n;i++){ 
7            if(nums[i]==1) v1.push_back(i);
8            else if(nums[i]==2) v2.push_back(i);
9        }
10        int res=INT_MAX;
11        for(int i:v1){
12            for(int j:v2){
13                res=min(res,abs(i-j));
14            }
15        }
16        if(res!=INT_MAX) return res;
17        return -1;
18    }
19};