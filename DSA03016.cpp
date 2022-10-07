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
        int s, d;
        cin >> s >> d;
        int a[N];
        a[0] = 1;
        s -= 1;
        int i = d - 1;
        while (i >= 1)
        {
            if (s < 10)
            {
                a[i] = s;
                s = 0;
            }
            else
            {
                a[i] = 9;
                s -= 9;
            }
            i--;
        }
        if (s >= 9)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            a[0] += s;
        }
        for (int i = 0; i < d; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}