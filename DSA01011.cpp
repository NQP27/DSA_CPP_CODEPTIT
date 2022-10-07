#include <bits/stdc++.h>
#define N 100000
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
        int x;
        cin >> x;
        cin.ignore();
        string s;
        getline(cin, s);
        int i = s.length() - 2;
        while (i >= 0 and s[i] - '0' >= s[i + 1] - '0')
        {
            i--;
        }
        if (i == -1)
        {
            cout << x << " "
                 << "BIGGEST" << endl;
        }
        else
        {
            int j = s.length() - 1;
            while (s[j] - '0' <= s[i] - '0')
            {
                j--;
            }
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            int p = i + 1;
            int q = s.length() - 1;
            while (p < q)
            {
                char c = s[p];
                s[p] = s[q];
                s[q] = c;
                p++;
                q--;
            }
            cout << x << " " << s;
            cout << endl;
        }
    }
    return 0;
}