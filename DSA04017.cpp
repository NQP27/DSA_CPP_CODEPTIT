#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long

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
        ll a[N], b[N];
        int n;
        cin >> n;
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
            if (!check)
                if (b[i] != a[i])
                {
                    cout << i + 1 << endl;
                    check = 1;
                }
        }
    }
    system("pause");
    return 0;
}