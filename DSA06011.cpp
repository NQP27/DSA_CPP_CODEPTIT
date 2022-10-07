#include <bits/stdc++.h>
#define N 10000
using namespace std;
bool cmp(int a, int b)
{
    return abs(a) < abs(b);
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
        vector<int> v;
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // v.push_back(a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                v.push_back(a[i] + a[j]);
            }
        }
        stable_sort(v.begin(), v.end(), cmp);
        cout << v[0] << endl;
    }
    return 0;
}