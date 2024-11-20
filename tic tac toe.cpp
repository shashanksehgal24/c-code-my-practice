#include <iostream>
#include <vector>

// Function to display the Tic-Tac-Toe board
void displayBoard(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j];
            if (j < 2) {
                std::cout << " | ";
            }
        }
        std::cout << std::endl;
        if (i < 2) {
            std::cout << "---------" << std::endl;
        }
    }
}

// Function to check if the game is over
bool isGameOver(const std::vector<std::vector<char>>& board, char player) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true; // Row win
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; // Column win
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; // Diagonal win (top-right to bottom-left)
    }

    // Check for a draw
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false; // Game is not over yet
            }
        }
    }
    
    std::cout << "It's a draw!" << std::endl;
    return true; // It's a draw
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' ')); // Initialize an empty board
    char currentPlayer = 'X';
    
    std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;
    
    while (true) {
        std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        int row, col;
        std::cin >> row >> col;
        
        // Check if the input is valid
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }
        
        // Make the move
        board[row][col] = currentPlayer;
        displayBoard(board);
        
        // Check if the current player wins or if it's a draw
        if (isGameOver(board, currentPlayer)) {
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            break;
        }
        
        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    
    return 0;
}
