#include <bits/stdc++.h>
#define N 10000
int check;
using namespace std;
void mang(set<int> s, int a[])
{
    int i = 1;
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        a[i] = *it;
        i++;
    }
}
void ktao(int a[], int k)
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh(int a[], int n, int k)
{
    int i = k;
    while (i >= 1 and a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        check = 1;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
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
    int t = 1;
    while (t--)
    {
        set<int> s;
        int n, k;
        cin >> n >> k;
        int a[N], b[N];
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        n = s.size();
        mang(s, a);
        ktao(b, k);
        check = 0;
        while (!check)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << a[b[i]] << " ";
            }
            sinh(b, n, k);
            cout << endl;
        }
    }
    return 0;
}