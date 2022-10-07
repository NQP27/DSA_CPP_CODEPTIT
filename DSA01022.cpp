#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
void ktao(int n, int a[])
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
    int t;
    cin >> t;
    while (t--)
    {
        string s = "";
        int n;
        cin >> n;
        int a[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s += a[i] + '0';
        }
        ktao(n, a);
        check = 0;
        int cnt = 0;
        while (!check)
        {
            string temp = "";
            ++cnt;
            for (int i = 1; i <= n; i++)
            {
                temp += a[i] + '0';
            }
            if (temp == s)
            {
                cout << cnt << endl;
                break;
            }
            sinh(a, n);
        }
        // if (cnt == 1)
        // {
        //     cout << cnt << endl;
        // }
    }
    return 0;
}