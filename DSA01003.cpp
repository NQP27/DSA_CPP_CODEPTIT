#include <bits/stdc++.h>
#define N 100000
using namespace std;

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
        int n;
        cin >> n;
        int a[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int i = n - 1;
        while (i >= 1 and a[i] > a[i + 1])
        {
            i--;
        }
        if (i == 0)
        {
            for (int i = n; i >= 1; i--)
            {
                cout << a[i] << " ";
            }
            cout << endl;
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
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}