#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long

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
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        s1 = "0" + s1;
        s2 = "0" + s2;
        int n = s1.length();
        int m = s2.length();
        // cout << n << m << endl;
        int L[n + 1][m + 1] = {0};
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << L[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 or j == 0)
                {
                    L[i][j] = 0;
                }
                else
                {
                    if (s1[i] == s2[j])
                    {
                        L[i][j] = L[i - 1][j - 1] + 1;
                    }
                    else
                    {
                        L[i][j] = max(L[i][j - 1], L[i - 1][j]);
                    }
                }
            }
        }
        // for (int i = 1; i < n; i++)
        // {
        //     for (int j = 1; j < m; j++)
        //     {
        //         cout << L[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        cout << L[n - 1][m - 1] << endl;
    }
    system("pause");
    return 0;
}