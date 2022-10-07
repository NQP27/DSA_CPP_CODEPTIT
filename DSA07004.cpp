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
    cin.ignore();
    while (t--)
    {
        string s;
        while (getline(cin, s))
        {
            int cnt = 0;
            stack<int> st;
            for (int i = 0; i < s.length(); i++)
            {
                char c1 = ')';
                char c2 = '(';
                if (s[i] == c1 and st.empty() == 0)
                {
                    st.pop();
                }
                else if (s[i] == c1 and st.empty() == 1)
                {
                    cnt++;
                    st.push(1);
                }
                else
                {
                    st.push(1);
                }
            }
            cnt += st.size() / 2;
            cout << cnt << endl;
        }
    }
    return 0;
}