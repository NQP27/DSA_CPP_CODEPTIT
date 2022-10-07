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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        priority_queue<int> pq;
        for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            pq.push(it->second);
        }
        while (n > 0)
        {
            int top = pq.top();
            top--;
            pq.pop();
            pq.push(top);
            n--;
        }
        int res = 0;
        while (pq.size() != 0)
        {
            res += pq.top() * pq.top();
            pq.pop();
        }
        cout << res << endl;
    }
    return 0;
}