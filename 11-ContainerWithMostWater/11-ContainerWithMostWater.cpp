// Last updated: 3/11/2026, 12:18:27 AM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int res=INT_MIN;
6        int i=0,j=n-1;
7        while(i<j){
8            int area=(j-i)*min(height[i],height[j]);
9            res=max(res,area);
10            if(height[i]<height[j]) i++;
11            else j--;
12        }
13        return res;
14    }
15};