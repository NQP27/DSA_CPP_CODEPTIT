#include <bits/stdc++.h>
#define N 10000
using namespace std;
int check;
void ktao(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh(int a[], int n)
{
    int i = n;
    while (i >= 1 and a[i] == 9)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        check = 1;
    }
    else
    {
        a[i] = 9;
    }
}
int ktra(int a[], int n, int k)
{
    long long s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s * 10 + (long long)a[i];
    }
    return s % k == 0 and s != 0;
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
    while (t--)
    {
        int k;
        cin >> k;
        int ping = 0;
        for (int n = 1;; n++)
        {
            if (ping == 1)
            {
                break;
            }
            int a[N];
            ktao(a, n);
            check = 0;
            while (!check)
            {
                if (ktra(a, n, k))
                {
                    for (int i = 1; i <= n; i++)
                    {
                        cout << a[i];
                    }
                    cout << endl;
                    ping = 1;
                    break;
                }
                sinh(a, n);
            }
        }
    }
    return 0;
}
