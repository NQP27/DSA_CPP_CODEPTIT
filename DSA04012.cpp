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
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        pair<int, int> a[N];
        pair<int, int> b[N];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = make_pair(x, i);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b[i] = make_pair(x, i);
        }
        vector<pair<int, int> > v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                v.push_back(make_pair(a[i].first * b[j].first, a[i].second + b[j].second));
            }
        }
        for (int i = 0; i < n + m - 1; i++)
        {
            int sum = 0;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j].second == i)
                {
                    sum += v[j].first;
                }
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}