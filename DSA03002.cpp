#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        // cout << s1 << " " << s2;
        int n1 = 0;
        int n2 = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '6')
            {
                s1[i] = '5';
            }
            n1 = n1 * 10 + (s1[i] - '0');
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == '6')
            {
                s2[i] = '5';
            }
            n2 = n2 * 10 + (s2[i] - '0');
        }
        cout << n1 + n2 << " ";
        n1 = n2 = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '5')
            {
                s1[i] = '6';
            }
            n1 = n1 * 10 + (s1[i] - '0');
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == '5')
            {
                s2[i] = '6';
            }
            n2 = n2 * 10 + (s2[i] - '0');
        }
        cout << n1 + n2 << " ";
    }
    return 0;
}