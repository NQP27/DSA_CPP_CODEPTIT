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
    int t = 1;
    while (t--)
    {
        int check = 1;
        int n;
        int s;
        cin >> n >> s;
        int max[N];
        int min[N];
        int x = s;
        int k = 0;
        while (x >= 9 and k < n)
        {
            max[k] = 9;
            x -= 9;
            k++;
        }
        if (k < n)
        {
            max[k] = x;
            x = 0;
        }
        if (x != 0 or s == 0)
        {
            check = 0;
        }
        x = s - 1;
        k = n - 1;
        min[0] = 1;
        while (x >= 9 and k > 0)
        {
            min[k] = 9;
            x -= 9;
            k--;
        }
        if (k > 0)
        {
            min[k] = x;
            x = 0;
        }
        else if (k == 0 and x <= 8)
        {
            min[0] += x;
            x = 0;
        }
        if (x != 0)
        {
            check = 0;
        }
        if (check)
        {
            for (int i = 0; i < n; i++)
            {
                cout << min[i];
            }
            cout << " ";
            for (int i = 0; i < n; i++)
            {
                cout << max[i];
            }
        }
        else
        {
            cout << -1 << " " << -1;
        }
    }
    return 0;
}