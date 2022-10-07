#include <bits/stdc++.h>
#define N 100000
int check;
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
        string s;
        int a[N];
        cin >> s;
        stack<int> st;
        st.push(s.length() + 1);
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'I')
            {
                st.push(i + 1);
            }
        }
        // st.push(0);
        int d = 0;
        int i = 0;
        while (st.size() > 0)
        {
            d += st.top() - i;
            int x = d;
            for (int k = i; k < st.top(); k++)
            {
                a[k] = x;
                x--;
            }
            i = st.top();
            st.pop();
        }
        for (int i = 0; i <= s.length(); i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
