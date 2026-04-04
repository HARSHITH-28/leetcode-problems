// Last updated: 4/4/2026, 4:56:02 PM
1class Solution {
2public:
3    string decodeCiphertext(string encodedText, int rows) {
4        if(encodedText.empty()) return "";
5        int cols=encodedText.size()/rows;
6        vector<string> mat;
7        int ind=0;
8        for(int i=0;i<rows;i++){
9            string s="";
10            for(int j=0;j<cols;j++)
11                s.push_back(encodedText[ind++]);
12            mat.push_back(s);
13        }
14        string res="";
15        int i=0;
16        int j=0;
17        int base=0;
18        while(i!=rows and j!=cols){
19            res.push_back(mat[i][j]);
20            i++;
21            j++;
22            if(i==rows){
23                i=0;
24                j=++base;
25            }
26        }
27        while(res[res.size()-1]==' ') res.pop_back();
28        return res;
29    }
30};