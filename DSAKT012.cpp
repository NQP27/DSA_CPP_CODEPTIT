#include <bits/stdc++.h>
#define N 100000
using namespace std;
long n, s, sum, cnt, res;
long a[N];
int check;
void backtrack(int i)
{
    for (int j = i; j < n; j++)
    {
        sum += a[j];
        cnt++;
        if (sum == s)
        {
            check = 1;
            res = res < cnt ? res : cnt;
        }
        else if (sum > s)
        {
            sum -= a[j];
            cnt--;
            continue;
        }
        backtrack(j + 1);
        cnt--;
        sum -= a[j];
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
        sum = cnt = 0;
        res = LONG_MAX;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        backtrack(0);
        if (check)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}