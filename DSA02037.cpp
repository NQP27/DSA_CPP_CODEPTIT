#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n, a[N], sum, x, b[N];
int check;
vector<int> res;
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
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        for (int i = 1; i <= pow(2, n); i++)
        {
            string s = bitset<20>(i).to_string().substr(20 - n, n);
            sum = 0;
            res.clear();
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '1')
                {
                    sum += a[i];
                    res.push_back(a[i]);
                }
            }
            if (isPrime(sum))
            {
                for (int i = 0; i < res.size(); i++)
                {
                    cout << res[i] << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
