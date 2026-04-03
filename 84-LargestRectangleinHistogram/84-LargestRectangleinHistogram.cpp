// Last updated: 4/3/2026, 11:13:58 PM
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        stack<int> s;
5        int area=0,n=heights.size();
6        for(int i=0;i<n;i++){
7            while(!s.empty() && heights[s.top()]>heights[i]){
8                int ele=s.top();
9                s.pop();
10                int nse=i;
11                int pse=s.empty()?-1:s.top();
12                area=max(area,heights[ele]*(nse-pse-1));
13            }
14            s.push(i);
15        }
16        while(!s.empty()){
17            int ele=s.top();
18            s.pop();
19            int nse=n;
20            int pse=s.empty()?-1:s.top();
21            area=max(area,heights[ele]*(nse-pse-1));
22        }
23        return area;
24    }
25};