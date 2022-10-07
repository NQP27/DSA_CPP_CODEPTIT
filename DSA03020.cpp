#include <bits/stdc++.h>
#define N 100000
int check;
using namespace std;
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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int cnt = 0;
        priority_queue<int, vector<int>, greater<int> > pq1;
        priority_queue<int, vector<int>, greater<int> > pq2;
        for (int i = 0; i < s.length(); i++)
        {
            char c1 = '[';
            char c2 = ']';
            if (s[i] == c1)
            {
                pq1.push(i);
            }
            else if (s[i] == c2)
            {
                pq2.push(i);
            }
        }
        while (pq2.size() != 0)
        {
            if (pq2.top() > pq1.top())
            {
                pq1.pop();
                pq2.pop();
            }
            else
            {
                cnt += pq1.top() - pq2.top();
                int x = pq2.top();
                int y = pq1.top();
                pq1.pop();
                pq2.pop();
                pq1.push(x);
                pq2.push(y);  
            }
        }
        cout << cnt << endl;
    }
    return 0;
}