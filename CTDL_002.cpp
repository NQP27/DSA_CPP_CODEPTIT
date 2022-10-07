#include <bits/stdc++.h>
#define N 10000
using namespace std;

int n, a[N], check, tong;

// Khoi tao
void ktao(int k)
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

// Ham sinh
void sinh(int k)
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
bool kiemtra(int b[N], int k)
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += b[a[i]];
    }
    return sum == tong;
}

// Main
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> tong;
    int b[N], c[125][125];
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(b + 1, b + n + 1);
    for (int k = 1; k <= n; k++)
    {
        int ping = 0;
        check = 0;
        ktao(k);
        int o = 1;
        while (check == 0)
        {
            if (kiemtra(b, k) == 1)
            {
                ping = 1;
                for (int i = 1; i <= k; i++)
                {
                    c[o][i] = b[a[i]];
                }
                o++;
                x += o - 1;
            }
            sinh(k);
        }
        if (ping)
        {
            for (int i = o - 1; i > 0; i--)
            {
                for (int j = 1; j <= k; j++)
                {
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    cout << x - 1;
    return 0;
}
