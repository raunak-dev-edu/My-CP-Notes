// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqazl0ZXJEMDRJRnZrVW1iNEFtcFZ6QkVwRVlMUXxBQ3Jtc0trVTdvYTJTZ0l6VzF3VVhNVHRpZ1NxdmpiVTN5QzNLc2h5bVFNSnRzeThDalpOTlE4X01LdHNyVHVHY3JXc0p5RU84dmdqa0VmYjczZ2hSMFIyU1BxUDBqSnVpN1o1OWtDNWJEbjA0TG9Xc1NBSGg2Zw&q=https%3A%2F%2Fwww.codingninjas.com%2Fcodestudio%2Fproblems%2Fsudoku-solver_699919%3FleftPanelTab%3D0%26utm_source%3Dyoutube%26utm_medium%3Daffiliate%26utm_campaign%3DLovebabbar&v=8lWxaRviJBA
/*
-> Sudoku solver

bool isSafe(int row, int col, vector<vector<int>&board, int val){
    for(int i=0; i<board.size(); i++){
        //row check
        if(board[row][i] == val){
            return false;
        }
        //col check
        if(board[i][col] ==val){
            return false;
        }
        //3*3 matrix check
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>> &board){

    int n = board[0].size(); 

    for(int row =0; row<n; row++){
        for(int col =0; col<n; col++){

            //cell empty
            if(board[row][col] ==0){
                for(int val =1; val<=9; val++){
                    if(isSafe(row,col,board,val)){
                        board[row][col]=val;
                        //recurssive call
                        bool aageSolutionPossible = solve(board);
                        if(aageSolutionPossible){
                            return true;
                        }
                        else{
                            //backtrack
                            board[row][col] =0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<int>> &sudoku){
    solve(sudoku);
}

TC - O(9^n) (n-no of empty cell)
SC - O(1)

*/