#include <iostream>
using namespace std;
char Board[3][3];
char Player1 = 'A';

void initialBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Board[i][j] = ' ';
        }
    }
}

void showtheBoard() {
    cout << "Game Board:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "-------------" << endl;
        for (int j = 0; j < 3; j++) {
            cout << "| " << Board[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "-------------" << endl;
}

bool Drawcheck() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (Board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

bool Wincheck() {
    for (int i = 0; i < 3; i++) {
        if (Board[i][0] == Player1 && Board[i][1] == Player1 && Board[i][2] == Player1)
            return true;
        if (Board[0][i] ==Player1 && Board[1][i] == Player1 && Board[2][i] == Player1)
            return true;
    }
    
    if (Board[0][2] == Player1 && Board[1][1] == Player1 && Board[2][0] == Player1)
        return true;
    if (Board[0][0] ==Player1 && Board[1][1] == Player1 && Board[2][2] == Player1)
        return true;

    return false;
}
void switchPlayer() {
    Player1 = (Player1 == 'A') ? 'B' : 'A';
}

int main() {
    cout<<"\t\t\t\tLET'S HAVE SOME FUNNN!!!!\t\t\t\t"<<endl;
    cout<<"\t\t\tLET'S PLAY TIC-TOC-TOE GAME!!!!\t\t\t"<<endl;

    char Again = 'y';
    while (Again == 'y' || Again == 'Y') {
        initialBoard();
        bool GAMEWIN = false;
        bool GAMEDRAW = false;

        while (!GAMEWIN && !GAMEDRAW) {
            showtheBoard();
            cout << "Player " << Player1 << " Please enter row and column separated by Space: ";
            int row, col;
            cin >> row >> col;

            if (row < 0 || row > 2 || col < 0 || col > 2 || Board[row][col] != ' ') {
                cout << "Please enter correct move" << endl;
                continue;
            }

            Board[row][col] = Player1;

            if (Wincheck()) {
                showtheBoard();
                cout << "Player " << Player1 << " wins!" << endl;
                GAMEWIN = true;
            } else if (Drawcheck()) {
                showtheBoard();
                cout << "It's a draw!" << endl;
                GAMEDRAW = true;
            } else {
                switchPlayer();
            }
        }
        cout << "Want to play again?: ";
        cin >> Again;
    }
    cout << "Thank you for playing!" << endl<<"come again!! Have a Good Day"<<endl;
    return 0;
}
