// Last updated: 4/6/2026, 2:57:05 PM
1class Solution {
2public:
3    vector<vector<int>> subsets(vector<int>& nums) {
4        vector<vector<int>> res;
5        vector<int> temp;
6        find(0,nums,res,temp);
7        return res;
8    }
9    void find(int ind,vector<int>& nums,vector<vector<int>>& res,vector<int>& temp){
10        if(ind==nums.size()){
11            res.push_back(temp);
12            return;
13        }
14        find(ind+1,nums,res,temp);
15        temp.push_back(nums[ind]);
16        find(ind+1,nums,res,temp);
17        temp.pop_back();
18    }
19};