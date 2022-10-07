#include <bits/stdc++.h>
#define N 100000
using namespace std;

bool cmp(long a, long b) { return a > b; }

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
        vector<long> v1; // giam dan
        vector<long> v2; // tang dan
        int n;
        cin >> n;
        long a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                v2.push_back(a[i]);
            }
            else
            {
                v1.push_back(a[i]);
            }
        }
        sort(v1.begin(), v1.end(), cmp);
        sort(v2.begin(), v2.end());
        for (int i = 0; i < n / 2; i++)
        {
            cout << v2[i] << " " << v1[i] << " ";
        }
        if (n % 2 == 1)
        {
            cout << v2.back();
        }
    }
    return 0;
}