// Collect the set of things we see, encoded as strings. For example:

// '4' in row 7 is encoded as "(4)7".
// '4' in column 7 is encoded as "7(4)".
// '4' in the top-right block is encoded as "0(4)2".
// Scream false if we ever fail to add something because it was already added (i.e., seen before).

import java.util.*;

class solution{
    public static void main(String[] args) {
        char[][] board = {{'5','3','.','.','7','.','.','.','.'}
        ,{'6','.','.','1','9','5','.','.','.'}
        ,{'.','9','8','.','.','.','.','6','.'}
        ,{'8','.','.','.','6','.','.','.','.'}
        ,{'4','.','.','8','.','3','.','.','1'}
        ,{'7','.','.','.','2','.','.','.','6'}
        ,{'.','6','.','.','.','.','2','8','.'}
        ,{'.','.','.','4','1','9','.','.','5'}
        ,{'.','.','.','.','8','.','.','7','9'}};

        System.out.println(isValidSudoko(board));
    }
    public static boolean isValidSudoko(char[][] board) {
        Set seen = new HashSet();
        for (int i=0; i<9; ++i) {
            for (int j=0; j<9; ++j) {
                if (board[i][j] != '.') {
                    String b = "(" + board[i][j] + ")";
                    if (!seen.add(b + i) || !seen.add(j + b) || !seen.add(i/3 + b + j/3));
                        return false;
                }
            }
        }
        return true;
    }
}
