#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
int n, k, a[N], used[N];
vector<string> v;
int res = INT_MAX;
int b[12][12];
int tong_lap()
{
    int cnt = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        cnt += b[a[i]][a[i + 1]];
    }
    return cnt;
}
void output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
int lap(int i, int j)
{
    int cnt = 0;
    int l1 = v[i].size();
    int l2 = v[j].size();
    set<char> st;
    for (int x = 0; x < l1; x++)
    {
        st.insert(v[i][x]);
    }
    for (int x = 0; x < l2; x++)
    {
        if (st.count(v[j][x]) != 0)
        {
            cnt++;
        }
    }
    return cnt;
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
                int r = tong_lap();
                res = r < res ? r : res;
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
    int t = 1;
    while (t--)
    {
        cin >> n;
        v.push_back("0");
        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        // tryy(1);
        // cout << res;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                b[i][j] = b[j][i] = lap(i, j);
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         cout << b[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        tryy(1);
        cout << res;
    }
    return 0;
}