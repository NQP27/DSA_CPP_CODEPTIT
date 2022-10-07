#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
void output(int h, int d)
{
    for (int i = 0; i < h; i++)
    {
        cout << 4;
    }
    for (int i = 0; i < d; i++)
    {
        cout << 7;
    }
    cout << endl;
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
        long res = LONG_MAX;
        int check = 0;
        int n;
        cin >> n;
        int d = n / 7;
        int r = n % 7;
        while (d >= 0)
        {
            if (r % 4 == 0)
            {
                int h = r / 4;
                output(h, d);
                check = 1;
                break;
            }
            else
            {
                r += 7;
                d--;
            }
        }
        if (!check)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}