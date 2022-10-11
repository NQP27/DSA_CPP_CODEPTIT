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
        string s;
        cin >> s;
        char c1 = '(', c2 = ')';
        stack<int> st;
        int res = 0;
        st.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c1)
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if (st.size() > 0)
                {
                    res = max(res, i - st.top());
                }
                if (st.size() == 0)
                {
                    st.push(i);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}