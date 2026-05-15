class Solution {
    bool tester(int test[10]){
        for(int i=1;i<=9;i++){
            if(test[i]>1) return false;
        }
        return true;
    }

    bool check_boxes(vector<vector<char>>& board){
        int test[10];
        const char diff = '0';

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int test[10] = {0};
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        if(board[i*3+k][j*3+l]!='.')
                            test[board[i*3+k][j*3+l] - diff]+=1;
                    }
                }
                if(!tester(test)) return false;
            }
        }
        return true;
    }

    bool check_rows(vector<vector<char>>& board){
        const char diff = '0';
        for(int i=0;i<9;i++){
            int test[10] = {0};
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')
                    test[board[i][j] - diff]+=1;
            }
            if(!tester(test)) return false;
        }
        return true;
    }

    bool check_cols(vector<vector<char>>& board){
        const char diff = '0';
        for(int i=0;i<9;i++){
            int test[10] = {0};
            for(int j=0;j<9;j++){
                if(board[j][i]!='.')
                    test[board[j][i] - diff]+=1;
            }
            if(!tester(test)) return false;
        }
        return true;
    }

    
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return check_boxes(board) && check_rows(board) && check_cols(board);

    }
};
