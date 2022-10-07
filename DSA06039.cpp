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
        int check = 0;
        multiset<long> s;
        int n;
        cin >> n;
        long a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (s.count(a[i]) > 1)
            {
                cout << a[i] << endl;
                check = 1;
                break;
            }
        }
        if (!check)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}