#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
int b[N];
void tryy(int i, int n, int a[])
{
    int x = 0;
    cout << "[";
    for (int j = 0; j < n - i; j++)
    {
        b[x] = a[j] + a[j + 1];
        if (j != n - i - 1)
        {
            cout << b[x] << " ";
        }
        else
        {
            cout << b[x];
        }
        x++;
    }
    cout << "]";
    cout << endl;
    if (i < n - 1)
    {
        tryy(i + 1, n, b);
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
        int n;
        int a[N];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                cout << a[i] << " ";
            }
            else
            {
                cout << a[i];
            }
        }
        cout << "]" << endl;
        if (n > 1)
            tryy(1, n, a);
    }
    return 0;
}