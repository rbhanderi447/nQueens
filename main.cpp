#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

int n;

bool isSafe(const vector<vector<int>>& board, int row, int col) {
    int i, j;


    // 1. Check same column (vertical)
    for (i = 0; i < row ; i++) {
        if (board[i][col] == 1) return false;
    }

    // 2. Direction: Up and Left (\)

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return false;
    }


    // 3. Direction: Up and Right (/)

    for (i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) return false;
    }

    

    return true; 
}

bool engine(vector<vector<int>>& board, int row){
    if(row == n) return true;

    for(int j = 0; j < n; j++){
        if(isSafe(board, row, j)){
            board[row][j] = 1;
            if(engine(board, row + 1)) return true;
            board[row][j] = 0;
        }
    }
    return false;
}

int main(){
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, 0));

    auto start = high_resolution_clock::now();

    if(engine(board, 0)){
        cout << "SOLUTION: \n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << board[i][j] << "  ";
            }
            cout << '\n';
        }
    }else{cout << "NO SOLUTION EXISTS!\n";}

    auto end = high_resolution_clock::now();
    double timeTaken =
    duration<double>(end - start).count();

    cout << "Time taken: " << timeTaken << " seconds\n";
    cout << "Time taken: " << timeTaken * 1000 << " milliseconds\n";
    cout << "Time taken: " << timeTaken * 1000000 << " microseconds\n";


    return 0;
}
