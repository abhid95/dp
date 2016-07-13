//Problem: https://code.google.com/codejam/contest/619102/dashboard#s=a&a=2

if (board[i - 1][j] != board[i][j] &&
      board[i][j - 1] != board[i][j] &&
      board[i - 1][j - 1] == board[i][j]) {
    larg[i][j] = 1 + min(larg[i - 1][j],
                         larg[i][j - 1],
                         larg[i - 1][j - 1]);
  }
