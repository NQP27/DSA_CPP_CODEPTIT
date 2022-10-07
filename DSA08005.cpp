#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll long long

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
        for (int i = 1; i <= n; i++)
        {
            int j = 0;
            string s = bitset<14>(i).to_string();
            while (s[j] == '0')
            {
                j++;
            }
            s = s.substr(j);
            cout << s << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}