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
        stack<int> st;
        for (int i = s.length() - 1; i > -1; i--)
        {
            if (isalnum(s[i]) == 0)
            {
                int fi = st.top();
                st.pop();
                int se = st.top();
                st.pop();
                int tmp;
                switch (s[i])
                {
                case '+':
                    tmp = fi + se;
                    break;
                case '-':
                    tmp = fi - se;
                    break;
                case '*':
                    tmp = se * fi;
                    break;
                case '/':
                    tmp = floor(fi / se);
                    break;
                case '^':
                    tmp = pow(fi, se);
                    break;
                case '%':
                    tmp = fi % se;
                    break;
                default:
                    break;
                }
                st.push(tmp);
            }
            else
            {
                st.push(s[i] - '0');
            }
        }
        cout << st.top() << endl;
    }
    system("pause");
    return 0;
}