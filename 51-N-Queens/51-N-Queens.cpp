// Last updated: 3/6/2026, 12:03:35 AM
1class Solution {
2public:
3    // bool check(int i,int j,vector<string>& board,int n){
4    //     int rows=i;
5    //     int cols=j;
6    //     while(i>=0 and j>=0){
7    //         if(board[i][j]=='Q') return false;
8    //         i--;
9    //         j--;
10    //     }
11
12    //     i=rows;
13    //     j=cols;
14    //     while(j>=0){
15    //         if(board[i][j]=='Q') return false;
16    //         j--;
17    //     }
18
19    //     i=rows;
20    //     j=cols;
21    //     while(i<n and j>=0){
22    //         if(board[i][j]=='Q') return false;
23    //         i++;
24    //         j--;
25    //     }
26
27    //     return true;
28    // }
29    // void find(int col,vector<string>& board,vector<vector<string>>& res,int n){
30    //     if(col==n){
31    //         res.push_back(board);
32    //         return;
33    //     }
34    //     for(int i=0;i<n;i++){
35    //         if(check(i,col,board,n)){
36    //             board[i][col]='Q';
37    //             find(col+1,board,res,n);
38    //             board[i][col]='.';
39    //         }
40    //     }
41    // }
42    void find(int col,vector<string>& board,vector<vector<string>>& res,int n,vector<int>& leftrow,vector<int>& udiagonal,vector<int>& ldiagonal){
43        if(col==n){
44            res.push_back(board);
45            return;
46        }
47        for(int i=0;i<n;i++){
48            if(leftrow[i]==0 && udiagonal[i+col]==0 && ldiagonal[n-1+col-i]==0){
49                board[i][col]='Q';
50                leftrow[i]=1;
51                udiagonal[i+col]=1;
52                ldiagonal[n-1+col-i]=1;
53                find(col+1,board,res,n,leftrow,udiagonal,ldiagonal);
54                board[i][col]='.';
55                leftrow[i]=0;
56                udiagonal[i+col]=0;
57                ldiagonal[n-1+col-i]=0;
58            }
59        }
60    }
61    vector<vector<string>> solveNQueens(int n) {
62        vector<vector<string>> res;
63        vector<string> board(n,string(n,'.'));
64        vector<int> leftrow(n,0),udiagonal(2*n-1,0),ldiagonal(2*n-1,0);
65        find(0,board,res,n,leftrow,udiagonal,ldiagonal);
66        return res;
67    }
68};
69