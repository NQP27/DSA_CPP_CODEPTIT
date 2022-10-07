#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
void tryy(int x, int y, int a[15][15], int n, string res)
{
    string s = res;
    // cout << s << edl;
    if (x == n - 1 and y == n - 1)
    {
        cout << s << " ";
        check = 1;
    }
    else
    { // xuong-down
        if (a[x + 1][y] == 1)
        {
            a[x][y] = 0;
            s += "D";
            tryy(x + 1, y, a, n, s);
            s.erase(s.length() - 1, 1);
            // a[x + 1][y] = 1;
            a[x][y] = 1;
        }
        // Trai-Left
        if (a[x][y - 1] == 1)
        {
            a[x][y] = 0;
            s += "L";
            tryy(x, y - 1, a, n, s);
            s.erase(s.length() - 1, 1);
            // a[x][y - 1] = 1;
            a[x][y] = 1;
        }
        // phai-right
        if (a[x][y + 1] == 1)
        {
            a[x][y] = 0;
            s += "R";
            tryy(x, y + 1, a, n, s);
            s.erase(s.length() - 1, 1);
            a[x][y] = 1;
        }
        // Len-Up
        if (a[x - 1][y] == 1)
        {
            a[x][y] = 0;
            s += "U";
            tryy(x - 1, y, a, n, s);
            s.erase(s.length() - 1, 1);
            // a[x - 1][y] = 1;
            a[x][y] = 1;
        }
        // a[x - 1][y] = 1;
        // a[x + 1][y] = 1;
        // a[x][y - 1] = 1;
        // a[x][y + 1] = 1;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        check = 0;
        int n;
        cin >> n;
        int a[15][15] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        string res = "";
        if (a[0][0] == 0)
        {
            check = 0;
        }
        else
        {
            tryy(0, 0, a, n, res);
        }
        if (check == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}