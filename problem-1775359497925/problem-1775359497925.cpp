// Last updated: 4/5/2026, 8:54:57 AM
1class Solution {
2public:
3    vector<int> findGoodIntegers(int n) {
4        vector<int> res;
5        unordered_map<long long,int> mp;
6        for(long long i=1;i<=cbrt(n);i++){
7            for(long long j=1;j<=cbrt(n);j++){
8                long long sum=i*i*i+j*j*j;
9                if(sum>n) break;
10                mp[sum]++;
11            }
12        }
13        for(auto it:mp) if(it.second>=4) res.push_back(it.first);
14        sort(res.begin(),res.end());
15        return res;
16    }
17};