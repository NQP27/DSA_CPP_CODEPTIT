#include <bits/stdc++.h>
#define N 1000000
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
        int m, n;
        cin >> m >> n;
        int a[N], b[N];
        set<int> st;
        set<int> st1;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
            st1.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            st.insert(b[i]);
        }
        for (set<int>::iterator it = st.begin(); it != st.end(); it++)
        {
            cout << *it << " ";
        }
        // for (auto x : st)
        // {
        //     cout << x << " ";
        // }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (st1.count(b[i]) != 0)
            {
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}