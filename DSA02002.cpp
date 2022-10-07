#include <bits/stdc++.h>
#define N 100000
using namespace std;
string res;
int b[N];
vector<string> v;
string toString(int n)
{
    ostringstream convert;
    convert << n;
    string s = convert.str();
    return s;
}
void tryy(int i, int n, int a[])
{
    res = "";
    res += "[";
    int x = 0;
    for (int j = 0; j < n - i; j++)
    {
        b[x] = a[j] + a[j + 1];
        string s = toString(b[x]);
        if (j != n - i - 1)
        {
            res += s;
            res += " ";
        }
        else
        {
            res += s;
        }
        x++;
    }
    res += "]";
    v.push_back(res);
    // cout << v.back() << endl;
    // cout << res << endl;
    if (i < n - 1)
    {
        tryy(i + 1, n, b);
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
        v.clear();
        int n;
        int a[N];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n > 1)
        {
            res = "";
            tryy(1, n, a);
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                cout << a[i] << " ";
            }
            else
            {
                cout << a[i];
            }
        }
        cout << "]" << endl;
    }
    return 0;
}