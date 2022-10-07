#include <bits/stdc++.h>
#define N 1000
using namespace std;
int n, k, p, s, cnt;
int a[N];
int prime[N] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
vector<string> res;
string toString(int n)
{
    ostringstream convert;
    convert << n;
    string s = convert.str();
    return s;
}
void pushh(vector<int> v)
{
    string s = "";
    for (int i = 1; i <= k; i++)
    {
        string tmp = toString(v[a[i] - 1]);
        s += tmp + " ";
    }
    res.push_back(s);
}
int check(vector<int> v)
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += v[a[i] - 1];
    }
    return sum == s;
}
void tryy(int i, vector<int> v)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            if (check(v))
            {
                cnt++;
                pushh(v);
            }
        }
        else
        {
            tryy(i + 1, v);
        }
    }
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
        res.clear();
        cnt = 0;
        a[0] = 0;
        int p1, p2;
        cin >> k >> p >> s;
        p1 = lower_bound(prime, prime + 46, p) - prime;
        int sum = 0;
        for (int j = p1 + 1;; j++)
        {

            if (p + prime[j] > s)
            {
                p2 = j;
                break;
            }
        }
        n = p2 - p1 - 1;
        vector<int> v(prime + p1 + 1, prime + p2);
        // cout << p1 << " " << p2 << endl;
        // cout << n << endl;
        tryy(1, v);
        cout << cnt << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << endl;
        }
    }
    return 0;
}