#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
set<string> res;
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
        res.clear();
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        for (int i = 1; i <= pow(2, n); i++)
        {
            string display = bitset<16>(i).to_string().substr(16 - n, n);
            string curr = "";
            for (int i = 0; i < display.length(); i++)
            {
                if (display[i] == '1')
                {
                    curr += s[i];
                }
                res.insert(curr);
            }
        }
        for (set<string>::iterator it = res.begin(); it != res.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}