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
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int d = 0;
        for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            if ((*it).second > d)
            {
                d = (*it).second;
            }
        }
        if (s.size() - d >= d - 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}