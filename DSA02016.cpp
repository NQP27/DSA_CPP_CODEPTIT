#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check, n, cnt;
void tryy(int i, int used[], int d1[], int d2[], int a[])
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0 and d1[i - j + n] == 0 and d2[i + j - 1] == 0)
        {
            a[i] = j;
            used[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if (i == n)
            {
                cnt++;
            }
            else
            {
                tryy(i + 1, used, d1, d2, a);
            }
            used[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
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
        int used[N], d1[N], d2[N], a[N];
        cin >> n;
        tryy(1, used, d1, d2, a);
        cout << cnt << endl;
    }
    return 0;
}