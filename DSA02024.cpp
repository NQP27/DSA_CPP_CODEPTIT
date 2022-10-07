#include <bits/stdc++.h>
#define N 100000
using namespace std;
int a[N], m;
int ping;
vector<string> res;
string toString(int n)
{
    ostringstream convert;
    convert << n;
    string s = convert.str();
    return s;
}
int check(int k, int a[], int b[])
{
    for (int i = 1; i < k; i++)
    {
        if (a[b[i]] > a[b[i + 1]])
        {
            return 0;
        }
    }
    return 1;
}
void pushh(int k, int b[])
{
    string s = "";
    for (int i = 1; i <= k; i++)
    {
        s += toString(a[b[i]]) + " ";
    }
    res.push_back(s);
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
    int t = 1;
    while (t--)
    {
        res.clear();
        int n;
        cin >> n;
        int b[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        // sort(a + 1, a + n + 1);
        for (int k = n; k >= 2; k--)
        {
            tryy(1, k, n, b);
        }
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << endl;
        }
        cout << endl;
    }
    return 0;
}