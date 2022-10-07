#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
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
        int n;
        cin >> n;
        int cnt = 0;
        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        for (int i = 9; i >= 0; i--)
        {
            while (n >= a[i])
            {
                n -= a[i];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}