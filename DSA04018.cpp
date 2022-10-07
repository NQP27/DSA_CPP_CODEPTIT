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
        int n;
        cin >> n;
        multiset<int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << st.count(0) << endl;
    }
    system("pause");
    return 0;
}