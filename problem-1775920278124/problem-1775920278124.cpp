// Last updated: 4/11/2026, 8:41:18 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int n=200000;
5        vector<bool> v(n+1,true);
6        v[0]=false;
7        v[1]=false;
8        for(int i=2;i<=sqrt(n);i++){
9            if(v[i]){
10                for(int j=i*i;j<=n;j+=i) v[j]=false;
11            }
12        }
13        long long res=0;
14        for(int i=0;i<nums.size();i++){
15            long long tmp=nums[i];
16            if(i%2==0) while(!v[tmp]) tmp++;
17            else while(v[tmp]) tmp++;
18            res+=tmp-nums[i];
19        }
20        return res;
21    }
22};