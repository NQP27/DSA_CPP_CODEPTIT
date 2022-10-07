#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
int n, b[17][17], used[N], a[N], pre, fee;
int res = INT_MAX;
int tong_lap()
{
    int cnt = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        cnt += b[a[i]][a[i + 1]];
    }
    cnt += b[a[n]][1];
    return cnt;
}
void tryy(int i)
{
    for (int j = 2; j <= n; j++)
    {
        if (used[j] == 0)
        {
            fee += b[pre][j];
            used[j] = 1;
            if (i == n)
            {
                fee += b[pre][1];
                res = fee < res ? fee : res;
            }
            else
            {
                pre = i;
                tryy(i + 1);
            }
            used[j] = 0;
            fee -= b[pre][j];
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
    int t = 1;
    while (t--)
    {
        a[1] = 1;
        fee = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> b[i][j];
            }
        }
        pre = 1;
        tryy(2);
        cout << res;
    }
    return 0;
}