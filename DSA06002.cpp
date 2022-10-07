#include <bits/stdc++.h>
#define N 10000
using namespace std;
int x;
bool cmp(int a, int b)
{
    return abs(a - x) < abs(b - x);
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
        int n;
        cin >> n;
        cin >> x;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
