#include <bits/stdc++.h>
#define N 100000
int check;
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
        deque<string> dq;
        int n;
        cin >> n;
        cin.ignore();
        while (n--)
        {
            string s;
            getline(cin, s);
            stringstream ss(s);
            string tmp;
            vector<string> v;
            while (ss >> tmp)
            {
                v.push_back(tmp);
            }
            // cout << s1[0] << " va " << s1[1] << endl;
            if (v[0] == "PUSH")
            {
                dq.push_back(v[1]);
            }
            else if (v[0] == "PRINT")
            {
                if (dq.empty())
                {
                    cout << "NONE" << endl;
                }
                else
                {
                    cout << dq.back();
                    cout << endl;
                }
            }
            else if (v[0] == "POP" and dq.empty() == 0)
            {
                dq.pop_back();
            }
        }
    }
    return 0;
}