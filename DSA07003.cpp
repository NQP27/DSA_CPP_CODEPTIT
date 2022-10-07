#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check1(string s, int i, int j)
{
    return j - i > 2;
}
int check2(string s, int i, int j)
{
    if (s[i - 1] == '-')
    {
        return 1;
    }
    if (s[i - 1] == '*' or s[j + 1] == '*' or s[i - 1] == '/' or s[j + 1] == '/')
    {
        return 1;
    }
    return 0;
}
int check3(string s, int i, int j)
{
    for (int x = i + 1; x < j; x++)
    {
        if (s[x] == '+' or s[x] == '-')
        {
            return 1;
        }
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
    cin.ignore();
    while (t--)
    {
        string s;
        while (getline(cin, s))
        {
            int a[N], b[N];
            int x = 0, y = 0;
            for (int i = 1; i < s.length() - 1; i++)
            {
                char c1 = '(';
                if (s[i] == c1)
                {
                    a[x] = i;
                    x++;
                }
                char c2 = ')';
                if (s[i] == c2)
                {
                    b[y] = i;
                    y++;
                }
            }
            for (int j = 0; j < x; j++)
            {
                if (check1(s, a[j], b[j]) == 1 and check2(s, a[j], b[j]) == 1 and check3(s, a[j], b[j]) == 1)
                {
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
        }
    }
    return 0;
}