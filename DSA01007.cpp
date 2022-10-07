#include <bits/stdc++.h>
#define N 100000
using namespace std;

int a[N], ok;
int n;
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 and a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
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
        cin >> n;
        ktao();
        ok = 1;
        while (ok)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 0)
                {
                    cout << "A";
                }
                else
                {
                    cout << "B";
                }
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}