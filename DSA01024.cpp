#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n, k, a[N];

void output(vector<string> v)
{
    for (int i = 1; i <= k; i++)
    {
        cout << v[a[i]] << " ";
    }
    cout << endl;
}
void tryy(int i, vector<string> v)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            output(v);
        }
        else
        {
            tryy(i + 1, v);
        }
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
    int t = 1;
    while (t--)
    {
        cin >> n >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        set<string> st;
        v.push_back("A");
        while (ss >> tmp)
        {
            st.insert(tmp);
        }
        n = st.size();
        a[0] = 0;
        for (set<string>::iterator it = st.begin(); it != st.end(); it++)
        {
            v.push_back(*it);
        }
        tryy(1, v);
        // for (int i = 0; i <= n; i++)
        // {
        //     cout << v[i] << endl;
        // }
    }
    return 0;
}