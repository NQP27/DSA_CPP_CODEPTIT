#include <bits/stdc++.h>
#define N 10000
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second != b.second ? a.second > b.second : a.first < b.first;
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
        vector< pair<int, int> > v;
        map<int, int> mp;
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        while (mp.size() != 0)
        {
            v.push_back(*mp.begin());
            mp.erase(mp.begin());
        }
        sort(v.begin(),v.end(),cmp);
        for (int i = 0; i < v.size(); i++)
        {
           for(int j=0;j<v[i].second;j++){
                cout<< v[i].first<< " ";
           }
        }
        cout<<endl;
        // for (auto x : mp)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }
    }
    return 0;
}