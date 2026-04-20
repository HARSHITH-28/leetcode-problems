// Last updated: 4/20/2026, 3:55:02 PM
1class Solution {
2public:
3    int reversePairs(vector<int>& nums) {
4        int cnt=0;
5        mergesort(nums,0,nums.size()-1,cnt);
6        return cnt;
7    }
8    void mergesort(vector<int>& nums,int low,int high,int& cnt){
9        if(low>=high) return;
10        int mid=low+(high-low)/2;
11        mergesort(nums,low,mid,cnt);
12        mergesort(nums,mid+1,high,cnt);
13        merge(nums,low,mid,high,cnt);
14    }
15    void merge(vector<int>& nums,int low,int mid,int high,int& cnt){
16        vector<int> v;
17        int i=low;
18        int j=mid+1;
19        for(i=low;i<=mid;i++){
20            while(j<=high && nums[i]>(long long)2*nums[j]) j++;
21            cnt+=j-(mid+1);
22        }
23        i=low;
24        j=mid+1;
25        while(i<=mid && j<=high){
26            if(nums[i]<nums[j]) v.push_back(nums[i++]);
27            else v.push_back(nums[j++]);
28        }
29        while(i<=mid) v.push_back(nums[i++]);
30        while(j<=high) v.push_back(nums[j++]);
31        for(i=low;i<=high;i++) nums[i]=v[i-low];
32    }
33};