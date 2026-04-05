// Last updated: 4/5/2026, 8:34:01 AM
1class Solution {
2public:
3    int mirrorFrequency(string s) {
4        string alpha="abcdefghijklmnopqrstuvwxyz";
5        string digi="0123456789";
6        map<char,char> mirr;
7        int l=0,r=25;
8        while(l<=r){
9            mirr[alpha[l]]=alpha[r];
10            mirr[alpha[r]]=alpha[l];
11            l++;
12            r--;
13        }
14        l=0;
15        r=9;
16        while(l<=r){
17            mirr[digi[l]]=digi[r];
18            mirr[digi[r]]=digi[l];
19            l++;
20            r--;
21        }
22        map<char,int> freq;
23        for(char c:alpha) freq[c]=0;
24        for(char c:digi) freq[c]=0;
25        for(char c:s) freq[c]+=1;
26        vector<int> vis1(26,-1),vis2(10,-1);
27        int res=0;
28        for(char c:s){
29            if(c>='a' and c<='z'){
30                if(vis1[c-'a']==1 or vis1[mirr[c]-'a']==1) continue;
31                vis1[c-'a']=1;
32                vis1[mirr[c]-'a']=1;
33            }
34            else{
35                if(vis2[c-'0']==1 or vis2[mirr[c]-'0']==1) continue;
36                vis2[c-'0']=1;
37                vis2[mirr[c]-'0']=1;
38            }
39            res+=abs(freq[c]-freq[mirr[c]]);
40        }
41        return res;
42    }
43};