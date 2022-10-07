#include <bits/stdc++.h>
#define N 1000000
using namespace std;

long long a[N];
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
        set<long long> s;
        long n;
        cin >> n;
        long pos = 0;
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (long i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                pos = i + 1;
                break;
            }
        }
        cout << pos << endl;
    }
    return 0;
}