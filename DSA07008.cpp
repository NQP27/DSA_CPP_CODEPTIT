#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
int ss(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    if (c == '*' || c == '/')
    {
        return 2;
    }
    if (c == '^' || c == '%')
    {
        return 3;
    }
    return 0;
}
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
        char c1 = '(', c2 = ')';
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                cout << s[i];
            }
            else if (s[i] == c1)
            {
                st.push(s[i]);
            }
            else if (s[i] == c2)
            {
                while (st.size() > 0 and st.top() != c1)
                {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (st.size() > 0 and ss(st.top()) >= ss(s[i]))
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (st.size() > 0)
        {
            if (st.top() == c1)
            {
                st.pop();
            }
            else
            {
                cout << st.top();
                st.pop();
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}