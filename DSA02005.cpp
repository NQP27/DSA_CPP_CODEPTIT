#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
string s;
void output(int n, int a[])
{
    for (int i = 1; i <= n; i++)
    {
        cout << s[a[i]-1];
    }
    cout << " ";
}
void tryy(int i, int n, int used[], int a[])
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            a[i] = j;
            used[j] = 1;
            if (i == n)
            {
                output(n, a);
            }
            else
            {
                tryy(i + 1, n, used, a);
            }
            used[j] = 0;
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
    cin.ignore();
    while (t--)
    {
        cin >> s;
        int a[N], used[N];
        int n = s.length();
        tryy(1, n, a, used);
        cout << endl;
    }
    return 0;
}