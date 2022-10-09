#include <bits/stdc++.h>
#define N 100
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
bool kiemtra(int a[N], int b[N], int k)
{
    for (int i = 1; i <= k - 1; i++)
    {
        if (b[a[i]] > b[a[i + 1]])
        {
            return 0;
        }
    }
    return 1;
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
    int k;
    cin >> n >> k;
    int b[N];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    // sort(b + 1, b + n + 1);
    int cnt = 0;
    check = 0;
    ktao(k);
    while (check == 0)
    {
        // for (int i = 1; i <= k; i++)
        // {
        //     cout << b[a[i]] << " ";
        // }
        if (kiemtra(a, b, k) == 1)
        {
            ++cnt;
        }
        cout << endl;
        sinh(k);
    }
    cout << cnt;
    return 0;
}
