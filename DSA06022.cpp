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
    while (t--){
        set<long> s;
        int n;
        cin >> n;
        long a[N];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size() == 1){
            cout << -1 << endl;
        }else{
            cout << *s.begin() << " ";
            s.erase(s.begin());
            cout << *s.begin() << endl;
        }
    }
    return 0;
}