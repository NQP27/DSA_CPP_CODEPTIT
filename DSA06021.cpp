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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long a[N];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == k){
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}