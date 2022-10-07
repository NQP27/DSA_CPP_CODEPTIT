#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
void ktao(int k, int a[])
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh(int a[], int n, int k)
{
    int i = k;
    while (i >= 1 and a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        check = 1;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
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
        string s = "";
        int n, k;
        cin >> n >> k;
        int a[N];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            s += a[i] + '0';
        }
        ktao(k, a);
        check = 0;
        int cnt = 0;
        while (!check)
        {
            string temp = "";
            ++cnt;
            for (int i = 1; i <= k; i++)
            {
                temp += a[i] + '0';
            }
            if (temp == s)
            {
                cout << cnt << endl;
                break;
            }
            sinh(a, n, k);
        }
        // if (cnt == 1)
        // {
        //     cout << cnt << endl;
        // }
    }
    return 0;
}