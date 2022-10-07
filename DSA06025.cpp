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
        cin >> n;
        multiset<int> s;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            cout << "Buoc " << i << ": ";
            for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}