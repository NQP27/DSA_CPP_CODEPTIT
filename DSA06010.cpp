#include <bits/stdc++.h>
#define N 1000000
using namespace std;
long long a[N];
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
        int n;
        cin >> n;
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            while (a[i] > 0)
            {
                st.insert(a[i] % 10);
                a[i] /= 10;
            }
        }
        for (set<int>::iterator it = st.begin(); it != st.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}