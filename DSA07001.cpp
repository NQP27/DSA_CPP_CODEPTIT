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
        string s;
        while (getline(cin, s))
        {
            stringstream ss(s);
            string tmp;
            vector<string> v;
            while (ss >> tmp)
            {
                v.push_back(tmp);
            }
            // cout << s1[0] << " va " << s1[1] << endl;
            if (v[0] == "push")
            {
                dq.push_back(v[1]);
            }
            else if (v[0] == "show")
            {
                if (dq.empty())
                {
                    cout << "empty" << endl;
                }
                else
                {
                    for (short i = 0; i < dq.size(); i++)
                    {
                        cout << dq[i] << " ";
                    }
                    cout << endl;
                }
            }
            else if (v[0] == "pop" and dq.empty() == 0)
            {
                dq.pop_back();
            }
        }
    }
    return 0;
}