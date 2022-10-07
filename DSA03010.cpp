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
        long a[N];
        priority_queue<long, vector<long> , greater<long> > pq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(a[i]);
        }
        long res = 0;
        while (pq.size() >= 2)
        {
            int x = 0;
            x += pq.top();
            pq.pop();
            x += pq.top();
            pq.pop();
            pq.push(x);
            res += x;
        }
        cout << res << endl;
    }
    return 0;
}