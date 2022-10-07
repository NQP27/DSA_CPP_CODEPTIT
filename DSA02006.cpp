#include <bits/stdc++.h>
#define N 100000
using namespace std;
int a[N], m;
int ping;
vector<vector<int> > res;
int check(int k, int a[N], int b[])
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += a[b[i]];
    }
    return sum == m;
}
void pushh(int k, int b[])
{
    vector<int> v;
    for (int i = 1; i <= k; i++)
    {
        v.push_back(a[b[i]]);
    }
    res.push_back(v);
}
void tryy(int i, int k, int n, int b[])
{
    for (int j = b[i - 1] + 1; j <= n - k + i; j++)
    {
        b[i] = j;
        if (i == k)
        {
            if (check(k, a, b))
            {
                ping = 1;
                pushh(k, b);
            }
        }
        else
        {
            tryy(i + 1, k, n, b);
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
        res.clear();
        int n;
        cin >> n >> m;
        int b[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        for (int k = n; k >= 1; k--)
        {
            tryy(1, k, n, b);
        }
        if (res.size() == 0)
        {
            cout << -1;
        }
        else
        {
            sort(res.begin(), res.end());
            for (int i = 0; i < res.size(); i++)
            {
                cout << "[";
                for (int j = 0; j < res[i].size() - 1; j++)
                {
                    cout << res[i][j] << " ";
                }
                cout << res[i][res[i].size() - 1] << "] ";
            }
        }
        cout << endl;
    }
    return 0;
}