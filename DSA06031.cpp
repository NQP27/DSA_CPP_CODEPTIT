#include <bits/stdc++.h>
#define N 100000
using namespace std;

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
        multiset<long> s;
        int n, k;
        cin >> n >> k;
        long a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            s.insert(a[i]);
        }
        for (int i = 0; i < n - k + 1; i++)
        {
            cout << *s.rbegin() << " ";
            s.erase(a[i]);
            s.insert(a[i + k]);
        }
        cout << endl;
    }
    return 0;
}