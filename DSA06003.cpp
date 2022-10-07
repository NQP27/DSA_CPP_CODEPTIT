#include <bits/stdc++.h>
#define N 10000
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
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int min_pos = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[min_pos])
                {
                    min_pos = j;
                }
            }
            if (min_pos != i)
            {
                cnt++;
            }
            swap(a[i], a[min_pos]);
        }
        cout << cnt << endl;
    }
    return 0;
}