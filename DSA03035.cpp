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
        map<int, int> mp;
        int n;
        cin >> n;
        int a[N];
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = x;
            x++;
        }
        int cnt = 1;
        int res = 0;
        int b[N];
        x = 1;
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            b[x] = it->second;
            x++;
            // cout << it->first << " " << it->second << endl;
        }
        for (int i = 1; i <= x; i++)
        {
            while (b[i] < b[i + 1])
            {
                cnt++;
                i++;
            }
            res = res > cnt ? res : cnt;
            cnt = 1;
        }
        cout << n - res;
    }
    return 0;
}