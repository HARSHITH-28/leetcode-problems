// Last updated: 2/15/2026, 10:47:49 PM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        if(a.size()<b.size()) a.insert(0,b.size()-a.size(),'0');
5        if(b.size()<a.size()) b.insert(0,a.size()-b.size(),'0');
6        int carry=0;
7        string res;
8        for(int i=a.size()-1;i>=0;i--){
9            int sum=carry+(a[i]-'0')+(b[i]-'0');
10            if(sum==0){
11                res.insert(0,1,'0');
12                carry=0;
13            }
14            else if(sum==1){
15                res.insert(0,1,'1');
16                carry=0;
17            }
18            else if(sum==2){
19                res.insert(0,1,'0');
20                carry=1;
21            }
22            else{
23                res.insert(0,1,'1');
24                carry=1;
25            }
26        }
27        if(carry) res.insert(0,1,'1');
28        return res;
29    }
30};