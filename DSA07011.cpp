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
        stack<string> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^' or s[i] == '%')
            {
                string fi = st.top();
                st.pop();
                string se = st.top();
                st.pop();
                string tmp = s[i] + se + fi;
                st.push(tmp);
            }
            else
            {
                st.push(string(1, s[i]));
            }
        }
        cout << st.top() << endl;
    }
    system("pause");
    return 0;
}