// ana mtkayf now mn kotr al 3azama

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n][n];

    // make all cells = '-'
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = '-';
        }
    }

    bool gameisended = 0;
    // 1==>x     0==>o
    bool player = 1;
    while (!gameisended)
    {
        int r, c;

        if (player == 1)
        {
            cout << "Player x turn. Enter empty location (r, c): ";
            cin >> r >> c;
           r--;c--;
            if (arr[r][c] == '-')
            {
                arr[r][c] = 'x';
                player = 0;
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            // loop cheak main diagonal
            bool xWin = 0;
            if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i][i] != 'x')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // loop cheak second diagonal
            else if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i][(n - 1) - i] != 'x')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // loop cheak horizon
            else if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[r][i] != 'x')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // loop cheak vertical
            else if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i][c] != 'x')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // who is winner
            if (xWin)
            {
                cout << "Player x won";
                gameisended = 1;
            }
        }


        if (player == 0)
        {
            cout << "Player o turn. Enter empty location (r, c): ";
            cin >> r >> c;
            r--;c--;
            if (arr[r][c] == '-')
            {
                arr[r][c] = 'o';
                player = 1;
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            // loop cheak main diagonal
            bool xWin = 0;
            if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i][i] != 'o')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // loop cheak second diagonal
            else if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i][(n - 1) - i] != 'o')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // loop cheak horizon
            else if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[r][i] != 'o')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // loop cheak vertical
            else if (!xWin)
            {
                bool xWin = 1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i][c] != 'o')
                    {
                        xWin = 0;
                        break;
                    }
                }
            }
            // who is winner
            if (xWin)
            {
                cout << "Player o won";
                gameisended = 1;
            }
        }
        
    }
}

// else
// {
//     cout << "Invalid input.Try again\n";
//     cout << "Player x turn. Enter empty location (r, c): ";
// }