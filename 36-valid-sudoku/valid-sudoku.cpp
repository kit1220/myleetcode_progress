class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<unordered_map<char,int>>> msq(3,vector<unordered_map<char,int>>(3));
        vector<unordered_map<char,int>> mh(9);
        vector<unordered_map<char,int>> mv(9);
        for (int i = 0 ; i < 9 ; i++){ // i for mh
            for (int j = 0 ; j < 9 ; j++){ // j for mv
                if (board[i][j] != '.'){
                    mv[j][board[i][j]]++;
                    if (mv[j][board[i][j]] > 1) return false;
                    mh[i][board[i][j]]++;
                    if (mh[i][board[i][j]] > 1) return false;
                    msq[i/3][j/3][board[i][j]]++;
                    if (msq[i/3][j/3][board[i][j]] > 1) return false;
                }
            }
        }
        return true;
    }
};