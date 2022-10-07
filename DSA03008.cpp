#include <bits/stdc++.h>
#define N 100000
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
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
        int S[N], F[N];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> F[i];
        }
        vector<pair<int, int> > v;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> p = make_pair(S[i], F[i]);
            v.push_back(p);
        }
        sort(v.begin(), v.end(), cmp);
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j].first >= v[i].second)
                {
                    cnt++;
                    i = j;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}