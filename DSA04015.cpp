#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long
ll k;
int check;
void find(ll a[N], int l, int r)
{
    if (l > r)
    {
        return;
    }
    if (l == r)
    {
        if (a[l] < k)
        {
            cout << l + 1 << endl;
            check = 1;
            return;
        }
    }
    int m = (l + r) / 2;
    if (a[m] > k)
    {
        find(a, l, m - 1);
    }
    else if (a[m] < k)
    {
        if (a[r] > k)
        {
            r--;
        }
        else if (a[r] == k)
        {
            cout << r + 1 << endl;
            check = 1;
            return;
        }
        else
        {
            m++;
        }
        find(a, m, r);
    }
    else if (a[m] == k)
    {
        cout << m + 1 << endl;
        check = 1;
        return;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        check = 0;
        int n;
        cin >> n >> k;
        ll a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int r = n - 1;
        int m = (r + l) / 2;
        if (a[r] < k)
        {
            cout << r + 1 << endl;
            continue;
        }
        find(a, 0, n - 1);
        if (!check)
        {
            cout << -1 << endl;
        }
    }
    system("pause");
    return 0;
}