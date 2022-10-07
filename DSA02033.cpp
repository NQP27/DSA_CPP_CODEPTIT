#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n, k, a[N], used[N];
char letters[30] = {'a', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
void output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

int check()
{
    for (int i = 1; i <= n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
        {
            return 0;
        }
    }
    return 1;
}
void tryy(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            a[i] = j;
            used[j] = 1;
            if (i == n)
            {
                if (check() == 1)
                {
                    output();
                }
            }
            else
            {
                tryy(i + 1);
            }
            used[j] = 0;
        }
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
        cin >> n;
        tryy(1);
        cout << endl;
    }
    return 0;
}