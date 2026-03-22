// Last updated: 3/22/2026, 8:58:19 AM
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums1) {
4        int n=nums1.size();
5        bool odd=false;
6        int miniodd=INT_MAX;
7        for(int i:nums1){ 
8            if(i%2){ 
9                odd=true;
10                miniodd=min(miniodd,i);
11            }
12        }
13        if(!odd) return true;
14        bool flag=true;
15        for(int i:nums1){
16            if(i%2==0){
17                if(i<=miniodd){
18                    return false;
19                }
20            }
21        }
22        return true;
23    }
24};