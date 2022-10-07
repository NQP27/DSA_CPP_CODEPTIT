#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
void ktao(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh(int a[], int n)
{
    int i = n - 1;
    while (i >= 1 and a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        check = 1;
    }
    else
    {
        int j = n;
        while (a[j] < a[i])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
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
    int t = 1;
    while (t--)
    {
        int n, a[N], b[N];
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        ktao(b, n);
        while (!check)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[b[i]] << " ";
            }
            cout << endl;
            sinh(b, n);
        }
        check = 0;
    }
    return 0;
}