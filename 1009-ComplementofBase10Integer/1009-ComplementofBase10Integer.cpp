// Last updated: 3/11/2026, 11:34:31 AM
1class Solution {
2public:
3    int bitwiseComplement(int n) {
4        if(n==0) return 1; 
5        string bs=bitset<32>(n).to_string();
6        int ind=bs.find('1');
7        bs=bs.substr(ind);
8        for(int i=0;i<bs.size();i++){
9            if(bs[i]=='0') bs[i]='1';
10            else bs[i]='0';
11        }
12        return stoi(bs,nullptr,2);
13    }
14};