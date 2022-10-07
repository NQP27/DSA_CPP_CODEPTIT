#include <bits/stdc++.h>
#define N 100000
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    // return a.second != b.second ? a.second < b.second : a.first < b.first;
    return a.second < b.second;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--)
    {
        vector<pair<int, int> > v;
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                v.push_back(make_pair(a[i], i + 1));
            }
        }
        sort(v.begin(), v.end(), cmp);
        int cnt = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
            // for (int j = i + 1; j < v.size(); j++)
            // {
            //     if (v[i].first > v[j].first && v[i].second - v[j].second < -1)
            //     {
            //         cnt++;
            //     }
            // }
        }
        cout << cnt;
    }
    return 0;
}