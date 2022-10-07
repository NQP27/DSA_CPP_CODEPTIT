#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
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
        check = 0;
        int n, k, a[N];
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        int i = k;
        while (i >= 1 and a[i] == a[i - 1] + 1)
        {
            i--;
        }
        if (i == 0)
        {
            check = 1;
            for (int i = 1; i <= k; i++)
            {
                cout << n - k + i << " ";
            }
        }
        else
        {
            a[i]--;
            if (a[k] != n)
            {
                for (int j = i + 1; j <= k; j++)
                {
                    a[j]++;
                }
            }
        }
        if (!check)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}