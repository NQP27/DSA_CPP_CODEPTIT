#include <bits/stdc++.h>
#define N 100000
using namespace std;

int n, a[N], ok;
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 6;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 and a[i] == 8)
    {
        a[i] = 6;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 8;
    }
}
int check(int a[])
{
    if (a[1] == 6)
    {
        return 0;
    }
    if (a[n] == 8)
    {
        return 0;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] == a[i + 1] and a[i] == 8)
        {
            return 0;
        }
    }
    for (int i = 1; i <= n - 3; i++)
    {
        if (a[i] == a[i + 1] and a[i + 1] == a[i + 2] and a[i] == 6 and a[i] == a[i + 3])
        {
            return 0;
        }
    }
    return 1;
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
    int t = 1;
    while (t--)
    {
        cin >> n;
        ktao();
        ok = 1;
        while (ok)
        {
            if (check(a))
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
    }
    return 0;
}