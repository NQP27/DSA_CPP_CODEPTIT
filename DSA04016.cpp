#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
int n, m;
ll k;
int cnt;
vector<int> v;
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
        cnt = 0;
        ll a[N], b[N];
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }
    system("pause");
    return 0;
}