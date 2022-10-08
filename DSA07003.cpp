#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
string check(string s)
{
    char x = ')';
    char y = '(';
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == x)
        {
            int ok = 1;
            while (st.top() != y)
            {
                char tmp = st.top();
                if (tmp == '+' or tmp == '-' or tmp == '*' or tmp == '/')
                {
                    ok = 0;
                }
                st.pop();
            }
            if (ok)
            {
                return "Yes";
            }
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    return "No";
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
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    system("pause");
    return 0;
}