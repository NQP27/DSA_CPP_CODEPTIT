#include <bits/stdc++.h>
#define N 1000000
using namespace std;
int n;
long res[N];
void process()
{
    for (int i = 4; i <= 100000; i++)
    {
        long min1=LONG_MAX;
        long min2 = min1;
        if (i % 2 == 0)
        {
            min1 = res[i - 1] < res[i / 2] ? res[i - 1] : res[i / 2];
        }
        if (i % 3 == 0)
        {
            min2 = res[i - 1] < res[i / 3] ? res[i - 1] : res[i / 3];
        }
        if (i % 3 != 0 and i % 2 != 0)
        {
            res[i] = res[i - 1] + 1;
            continue;
        }
        res[i] = (min1 < min2 ? min1 : min2) + 1;
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
        cin >> n;
        res[1] = 0;
        res[2] = 1;
        res[3] = 1;
        process();
        cout << res[n] << endl;
    }
    return 0;
}