#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
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
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum < 0)
            {
                sum = 0;
            }
            res = res > sum ? res : sum;
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}