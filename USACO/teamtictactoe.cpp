#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  freopen("tttt.in", "r", stdin);
  freopen("tttt.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // vector<vector<char>> board;
    char board[3][3];

  for (int i = 0; i < 3; i++) {
    char a, b, c;
    cin >> board[i][0] >> board[i][1] >> board[i][2];

  }
    int individual_wins = 0;
    int team_wins = 0;

    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            individual_wins++;
        }
        else if (board[i][0] == board[i][1] || board[i][1] == board[i][2] || board[i][0] == board[i][2])
        {
            team_wins++;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            individual_wins++;
        }
        else if (board[0][i] == board[1][i] || board[1][i] == board[2][i] || board[0][i] == board[2][i])
        {
            team_wins++;
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        individual_wins++;
    }
    else if (board[0][0] == board[1][1] || board[1][1] == board[2][2] || board[0][0] == board[2][2])
    {
        team_wins++;
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        individual_wins++;
    }
    else if (board[0][2] == board[1][1] || board[1][1] == board[2][0] || board[0][2] == board[2][0])
    {
        team_wins++;
    }
    cout << individual_wins << '\n';
    cout << team_wins << '\n';

  return 0;
}
