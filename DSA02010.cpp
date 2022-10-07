#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check, sum, n, s, a[N], cnt, b[N], x;
vector<string> res;
string toString(int n)
{
    ostringstream convert;
    convert << n;
    string s = convert.str();
    return s;
}
void pushh()
{
    string s = "";
    for (int i = 0; i < x; i++)
    {
        if (i != x - 1)
        {
            s += toString(a[b[i]]) + " ";
        }
        else
        {
            s += toString(a[b[i]]);
        }
    }
    res.push_back(s);
}
void tryy(int i)
{
    for (int j = i; j <= n; j++)
    {
        b[x] = j;
        sum += a[j];
        x++;
        if (sum == s)
        {
            cnt++;
            pushh();
        }
        else if (sum < s)
        {
            tryy(j);
        }
        // if (x == n or sum > s)
        // {
        //     x--;
        //     sum -= a[j];
        // }
        x--;
        sum -= a[j];
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
        x = 0;
        cnt = 0;
        a[N] = {0};
        b[0] = 1;
        check = 0;
        sum = 0;
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        tryy(1);
        if (cnt != 0)
        {
            for (int i = 0; i < res.size(); i++)
            {
                cout << "[";
                cout << res[i];
                cout << "]";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}