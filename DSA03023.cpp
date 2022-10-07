#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        deque<int> x_pos;
        deque<int> tr_pos;
        deque<int> d_pos;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
            if (s[i] == 'X')
            {
                x_pos.push_back(i);
            }
        }
        int x = mp['X'];
        int tr = mp['T'];
        int d = mp['D'];
        int res = 0;
        while (x_pos.front() < x)
        {
            x_pos.pop_front();
        }
        // cout << x << " " << tr << " " << d << endl;
        for (int i = 0; i < x; i++)
        {
            if (s[i] == 'T')
            {
                swap(s[i], s[x_pos.front()]);
                res++;
                x_pos.pop_front();
            }
            else if (s[i] == 'D')
            {
                swap(s[i], s[x_pos.back()]);
                res++;
                x_pos.pop_back();
            }
        }
        // cout << s << endl;
        for (int i = x; i < n; i++)
        {
            if (s[i] == 'T')
            {
                tr_pos.push_back(i);
            }
        }
        for (int i = x; i < x + tr; i++)
        {
            if (s[i] == 'D')
            {
                swap(s[i], s[tr_pos.back()]);
                res++;
                tr_pos.pop_back();
            }
        }
        // cout << s << endl;
        cout << res;
    }
    return 0;
}