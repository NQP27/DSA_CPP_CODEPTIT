#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n, a[N], sum, x, b[N], k;
vector<int> res;
vector<vector<int> > kq;
int count(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }
    return cnt;
}
int check()
{
    for (int i = 0; i < res.size() - 1; i++)
    {
        if (res[i] < res[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
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
        kq.clear();
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        for (int i = 1; i <= pow(2, n); i++)
        {
            string s = bitset<15>(i).to_string().substr(15 - n, n);
            if (count(s) == k)
            {
                res.clear();
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] == '1')
                    {
                        res.push_back(a[i]);
                    }
                }
                if (check())
                {
                    reverse(res.begin(),res.end());
                    kq.push_back(res);
                }
            }
        }
        sort(kq.begin(), kq.end());
        for (int i = 0; i < kq.size(); i++)
        {
            for (int j =0; j <kq[i].size(); j++)
            {
                cout << kq[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
