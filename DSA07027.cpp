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
        int n;
        cin >> n;
        long a[N], b[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(i);
            }
            else
            {
                while (!st.empty() and a[st.top()] < a[i])
                {
                    b[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while (!st.empty())
        {
            b[st.top()] = -1;
            st.pop();
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}