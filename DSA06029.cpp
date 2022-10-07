#include <bits/stdc++.h>
#define N 10000
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
    int t = 1;
    while (t--)
    {
        int n;
        int b[100][100];
        cin >> n;
        int buoc = 0;
        multiset<int> s;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            cin >> a[i];
            s.insert(a[i]);
            for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
            {
                b[buoc][j] = *it;
                j++;
            }
            buoc++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << "Buoc " << i << ": ";
            for (int j = 0; j <= i; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}