#include <bits/stdc++.h>
#define N 100000
int check;
using namespace std;
void ktao(int a[N], int k)
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

// Ham sinh
void sinh(int a[N], int k, int n)
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
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
int ktra(int a[], int s, int k)
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += a[i];
    }
    return sum == s;
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
    int n, k, s;
    while (cin >> n >> k >> s)
    {
        if (n == k and k == s and s == 0)
        {
            break;
        }
        int cnt = 0;
        if (n < k)
        {
            cout << cnt << endl;
            continue;
        }
        int a[N];
        ktao(a, k);
        check = 0;
        while (check == 0)
        {
            if (ktra(a, s, k))
            {
                cnt++;
            }
            sinh(a, k, n);
        }
        cout << cnt << endl;
    }
    return 0;
}