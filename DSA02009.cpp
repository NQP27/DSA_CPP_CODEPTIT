#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
int n, k, sum, s, cnt, avr;
int a[N], used[N];
void backtrack(int i)
{
    for (int j = i; a[j] <= avr; j++)
    {
        if (j >= n)
        {
            break;
        }
        if (used[j] == 0)
        {
            sum += a[j];
            used[j] = 1;
        }
        else
        {
            continue;
        }
        if (sum == avr)
        {
            sum = 0;
            cnt++;
            backtrack(0);
        }
        if (sum < avr)
        {
            backtrack(j + 1);
        }
        sum -= a[j];
        used[j] = 0;
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
        cnt = 0;
        used[N] = {0};
        s = 0;
        sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % k != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            avr = s / k;
            sort(a, a + n);
            backtrack(0);
            if (cnt == k)
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}