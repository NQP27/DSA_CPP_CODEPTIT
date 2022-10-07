#include <bits/stdc++.h>
#define N 1000000
using namespace std;
int a[N];
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
        set<int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        cout << *(s.rbegin()) - *(s.begin()) - 1 - s.size() + 2 << endl;
        // cout << s.size() << endl;
    }
    return 0;
}