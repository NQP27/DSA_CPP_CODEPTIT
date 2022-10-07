#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
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
        check = 1;
        int d;
        string s;
        cin >> d;
        cin.ignore();
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int freq[N];
        char res[N];
        int x = 0;
        vector<pair<char, int> > v;
        for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            v.push_back(make_pair(it->first, it->second));
            // cout << it->first << " " << it->second << endl;
        }
        sort(v.begin(), v.end(), cmp);
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
        int k = v.size();
        while (x < k)
        {
            int q = v[x].second;
            for (int i = 0; i < q; i++)
            {
                if (x + (i * d) > s.length())
                {
                    cout << -1 << endl;
                    check = 0;
                    break;
                }
                res[x + (i * d)] = v[x].first;
            }
            if (!check)
            {
                break;
            }
            x++;
        }
        if (check)
        {
            cout << 1;
            cout << endl;
        }
    }
    return 0;
}